/*
 * ============================================================
 *   SCIENTIFIC CALCULATOR  |  C++ Terminal Edition v3.0
 *   - ANSI Colors for design
 *   - Pure ASCII only - works on ALL terminals
 * ============================================================
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
#include <limits>
#include <sstream>

// ============================================================
//   ANSI COLOR CODES
// ============================================================
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define DIM "\033[2m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BRIGHT_RED "\033[91m"
#define BRIGHT_GREEN "\033[92m"
#define BRIGHT_YELLOW "\033[93m"
#define BRIGHT_BLUE "\033[94m"
#define BRIGHT_MAGENTA "\033[95m"
#define BRIGHT_CYAN "\033[96m"
#define BRIGHT_WHITE "\033[97m"
#define BG_BLACK "\033[40m"

// ============================================================
//   CONSTANTS & GLOBAL STATE
// ============================================================
const double PI = acos(-1.0);
const double E = exp(1.0);

bool degreeMode = true;
double memory = 0.0;
std::vector<std::string> history;

// ============================================================
//   UTILITY FUNCTIONS
// ============================================================
double toRad(double angle)
{
    return degreeMode ? angle * PI / 180.0 : angle;
}

void addHistory(const std::string &entry)
{
    if (history.size() >= 10)
        history.erase(history.begin());
    history.push_back(entry);
}

std::string fmt(double val)
{
    std::ostringstream ss;
    ss << std::setprecision(10) << val;
    return ss.str();
}

long long factorial(int n)
{
    if (n < 0)
        throw std::invalid_argument("Factorial undefined for negative numbers");
    if (n > 20)
        throw std::overflow_error("Factorial overflow (max is 20!)");
    long long r = 1;
    for (int i = 2; i <= n; ++i)
        r *= i;
    return r;
}

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// ============================================================
//   UI DRAWING
// ============================================================
void line(char ch = '=', int len = 54)
{
    std::cout << CYAN << "  ";
    for (int i = 0; i < len; i++)
        std::cout << ch;
    std::cout << RESET << "\n";
}

void thinLine()
{
    std::cout << DIM << CYAN << "  ";
    for (int i = 0; i < 54; i++)
        std::cout << "-";
    std::cout << RESET << "\n";
}

void printHeader()
{
    clearScreen();
    std::cout << "\n";
    line('=');
    std::cout << BRIGHT_CYAN << BOLD
              << "  #####   ###   ###  ###     ###  ###    ###  ##\n"
              << "  ##     ## ##  ##   ##     ## ## ##      ##  ##\n"
              << "  ####  ##   ## ##   ##    ##   ## ###    ##  ##\n"
              << "  ##    #######  ##  ##    #######  ###   ##  ##\n"
              << "  ##    ##   ##   ## ##### ##   ##   #### ##  #####\n"
              << RESET;
    line('=');
    std::cout << BOLD << BRIGHT_WHITE
              << "       Scientific Calculator  |  C++ Edition v3.0\n"
              << RESET;
    line('=');
    std::cout << "\n";
}

void sectionTitle(const std::string &title, const std::string &color)
{
    std::cout << color << BOLD << "  >> " << title << "\n"
              << RESET;
    thinLine();
}

void menuItem(const std::string &num, const std::string &label,
              const std::string &num2 = "", const std::string &label2 = "")
{
    std::cout << "   " << BRIGHT_YELLOW << BOLD << std::right << std::setw(2) << num << RESET
              << BRIGHT_WHITE << ". " << std::left << std::setw(20) << label << RESET;
    if (!num2.empty())
    {
        std::cout << "  " << BRIGHT_YELLOW << BOLD << std::right << std::setw(2) << num2 << RESET
                  << BRIGHT_WHITE << ". " << label2 << RESET;
    }
    std::cout << "\n";
}

void printStatusBar()
{
    std::string modeLabel = degreeMode ? "DEG" : "RAD";
    std::string modeColor = degreeMode ? BRIGHT_GREEN : BRIGHT_YELLOW;
    std::cout << "  " << BG_BLACK
              << BRIGHT_CYAN << " MODE: " << modeColor << BOLD << modeLabel
              << RESET << BG_BLACK << BRIGHT_CYAN << "   |   MEM: "
              << BRIGHT_YELLOW << BOLD << fmt(memory)
              << RESET << "\n\n";
}

void printMenu()
{
    printStatusBar();

    sectionTitle("ARITHMETIC", BRIGHT_CYAN);
    menuItem(" 1", "Add (+)", " 2", "Subtract (-)");
    menuItem(" 3", "Multiply (*)", " 4", "Divide (/)");
    menuItem(" 5", "Modulo (%)", " 6", "Power (x^y)");
    std::cout << "\n";

    sectionTitle("ROOTS & LOGARITHMS", BRIGHT_MAGENTA);
    menuItem(" 7", "Square Root", " 8", "Cube Root");
    menuItem(" 9", "log base 10", "10", "ln (natural log)");
    menuItem("11", "log(base, x)");
    std::cout << "\n";

    sectionTitle("TRIGONOMETRY", BRIGHT_BLUE);
    menuItem("12", "sin", "13", "cos");
    menuItem("14", "tan", "15", "asin");
    menuItem("16", "acos", "17", "atan");
    std::cout << "\n";

    sectionTitle("SPECIAL FUNCTIONS", BRIGHT_GREEN);
    menuItem("18", "Factorial (n!)", "19", "Absolute |x|");
    menuItem("20", "x^2 (square)", "21", "1/x (reciprocal)");
    menuItem("22", "exp(x)");
    std::cout << "\n";

    sectionTitle("CONSTANTS", BRIGHT_YELLOW);
    menuItem("23", "PI (3.14159...)", "24", "e (2.71828...)");
    std::cout << "\n";

    sectionTitle("MEMORY", BRIGHT_GREEN);
    menuItem("25", "MS - store", "26", "MR - recall");
    menuItem("27", "MC - clear");
    std::cout << "\n";

    sectionTitle("SETTINGS & INFO", WHITE);
    menuItem("28", "Toggle DEG/RAD", "29", "View History");
    menuItem("30", "Clear Screen", " 0", "Exit");

    line('=');
    std::cout << BOLD << BRIGHT_WHITE << "  => Enter choice: " << RESET;
}

// ============================================================
//   INPUT / OUTPUT HELPERS
// ============================================================
double getNumber(const std::string &prompt)
{
    double val;
    while (true)
    {
        std::cout << BRIGHT_CYAN << "  > " << RESET
                  << BRIGHT_WHITE << prompt << ": " << RESET;
        if (std::cin >> val)
            return val;
        std::cout << BRIGHT_RED << BOLD << "  [!] Invalid input. Try again.\n"
                  << RESET;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void showResult(const std::string &expr, double result)
{
    std::string entry = expr + " = " + fmt(result);
    addHistory(entry);
    std::cout << "\n";
    line('-', 54);
    std::cout << BRIGHT_GREEN << BOLD << "  RESULT >> "
              << BRIGHT_WHITE << entry << RESET << "\n";
    line('-', 54);
    std::cout << "\n";
}

void showError(const std::string &msg)
{
    std::cout << "\n";
    line('-', 54);
    std::cout << BRIGHT_RED << BOLD << "  ERROR  >> "
              << WHITE << msg << RESET << "\n";
    line('-', 54);
    std::cout << "\n";
}

void showInfo(const std::string &label, double val)
{
    std::cout << "\n  " << BRIGHT_YELLOW << BOLD << label << " = "
              << BRIGHT_WHITE << std::setprecision(15) << val
              << RESET << "\n\n";
}

void pauseAndContinue()
{
    std::cout << DIM << "\n  Press Enter to continue..." << RESET;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    printHeader();
}

// ============================================================
//   MAIN PROGRAM
// ============================================================
int main()
{
    printHeader();

    int choice;
    while (true)
    {
        printMenu();
        std::cin >> choice;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            showError("Please enter a valid number between 0 and 30.");
            pauseAndContinue();
            continue;
        }

        try
        {
            double a, b, result;

            switch (choice)
            {

            // ---- ARITHMETIC --------------------------------
            case 1:
                a = getNumber("Enter first number");
                b = getNumber("Enter second number");
                showResult(fmt(a) + " + " + fmt(b), a + b);
                break;

            case 2:
                a = getNumber("Enter first number");
                b = getNumber("Enter second number");
                showResult(fmt(a) + " - " + fmt(b), a - b);
                break;

            case 3:
                a = getNumber("Enter first number");
                b = getNumber("Enter second number");
                showResult(fmt(a) + " * " + fmt(b), a * b);
                break;

            case 4:
                a = getNumber("Enter dividend");
                b = getNumber("Enter divisor");
                if (b == 0)
                    throw std::runtime_error("Division by zero!");
                showResult(fmt(a) + " / " + fmt(b), a / b);
                break;

            case 5:
                a = getNumber("Enter dividend");
                b = getNumber("Enter divisor");
                if (b == 0)
                    throw std::runtime_error("Modulo by zero!");
                showResult(fmt(a) + " % " + fmt(b), fmod(a, b));
                break;

            case 6:
                a = getNumber("Enter base");
                b = getNumber("Enter exponent");
                showResult(fmt(a) + " ^ " + fmt(b), pow(a, b));
                break;

            // ---- ROOTS & LOGS ------------------------------
            case 7:
                a = getNumber("Enter number");
                if (a < 0)
                    throw std::domain_error("Cannot sqrt a negative number");
                showResult("sqrt(" + fmt(a) + ")", sqrt(a));
                break;

            case 8:
                a = getNumber("Enter number");
                showResult("cbrt(" + fmt(a) + ")", cbrt(a));
                break;

            case 9:
                a = getNumber("Enter number");
                if (a <= 0)
                    throw std::domain_error("log10 requires a positive number");
                showResult("log10(" + fmt(a) + ")", log10(a));
                break;

            case 10:
                a = getNumber("Enter number");
                if (a <= 0)
                    throw std::domain_error("ln requires a positive number");
                showResult("ln(" + fmt(a) + ")", log(a));
                break;

            case 11:
                a = getNumber("Enter base");
                b = getNumber("Enter number");
                if (a <= 0 || a == 1)
                    throw std::domain_error("Invalid log base");
                if (b <= 0)
                    throw std::domain_error("log requires positive number");
                showResult("log_" + fmt(a) + "(" + fmt(b) + ")", log(b) / log(a));
                break;

            // ---- TRIGONOMETRY ------------------------------
            case 12:
                a = getNumber("Enter angle");
                showResult("sin(" + fmt(a) + (degreeMode ? " deg)" : " rad)"), sin(toRad(a)));
                break;

            case 13:
                a = getNumber("Enter angle");
                showResult("cos(" + fmt(a) + (degreeMode ? " deg)" : " rad)"), cos(toRad(a)));
                break;

            case 14:
                a = getNumber("Enter angle");
                showResult("tan(" + fmt(a) + (degreeMode ? " deg)" : " rad)"), tan(toRad(a)));
                break;

            case 15:
                a = getNumber("Enter value [-1 to 1]");
                if (a < -1 || a > 1)
                    throw std::domain_error("asin domain: [-1, 1]");
                result = asin(a);
                if (degreeMode)
                    result *= 180.0 / PI;
                showResult("asin(" + fmt(a) + ")", result);
                break;

            case 16:
                a = getNumber("Enter value [-1 to 1]");
                if (a < -1 || a > 1)
                    throw std::domain_error("acos domain: [-1, 1]");
                result = acos(a);
                if (degreeMode)
                    result *= 180.0 / PI;
                showResult("acos(" + fmt(a) + ")", result);
                break;

            case 17:
                a = getNumber("Enter value");
                result = atan(a);
                if (degreeMode)
                    result *= 180.0 / PI;
                showResult("atan(" + fmt(a) + ")", result);
                break;

            // ---- SPECIAL FUNCTIONS -------------------------
            case 18:
            {
                int n = (int)getNumber("Enter non-negative integer");
                long long f = factorial(n);
                std::string entry = std::to_string(n) + "! = " + std::to_string(f);
                addHistory(entry);
                std::cout << "\n";
                line('-', 54);
                std::cout << BRIGHT_GREEN << BOLD << "  RESULT >> "
                          << BRIGHT_WHITE << entry << RESET << "\n";
                line('-', 54);
                std::cout << "\n";
                break;
            }

            case 19:
                a = getNumber("Enter number");
                showResult("|" + fmt(a) + "|", fabs(a));
                break;

            case 20:
                a = getNumber("Enter number");
                showResult(fmt(a) + "^2", a * a);
                break;

            case 21:
                a = getNumber("Enter number");
                if (a == 0)
                    throw std::runtime_error("Division by zero!");
                showResult("1 / " + fmt(a), 1.0 / a);
                break;

            case 22:
                a = getNumber("Enter exponent");
                showResult("exp(" + fmt(a) + ")", exp(a));
                break;

            // ---- CONSTANTS ---------------------------------
            case 23:
                showInfo("PI", PI);
                break;

            case 24:
                showInfo("e", E);
                break;

            // ---- MEMORY ------------------------------------
            case 25:
                a = getNumber("Enter value to store");
                memory = a;
                std::cout << BRIGHT_GREEN << "\n  [+] Stored "
                          << BOLD << fmt(a) << RESET
                          << BRIGHT_GREEN << " in memory.\n\n"
                          << RESET;
                break;

            case 26:
                std::cout << "\n  " << BRIGHT_GREEN << BOLD
                          << "MR = " << BRIGHT_WHITE << fmt(memory)
                          << RESET << "\n\n";
                break;

            case 27:
                memory = 0.0;
                std::cout << BRIGHT_GREEN << "\n  [+] Memory cleared.\n\n"
                          << RESET;
                break;

            // ---- SETTINGS ----------------------------------
            case 28:
                degreeMode = !degreeMode;
                std::cout << BRIGHT_GREEN << "\n  [+] Switched to "
                          << BOLD << (degreeMode ? "DEGREES" : "RADIANS")
                          << RESET << BRIGHT_GREEN << " mode.\n\n"
                          << RESET;
                break;

            case 29:
                std::cout << "\n";
                line('=');
                std::cout << BRIGHT_MAGENTA << BOLD
                          << "  HISTORY - Last 10 Calculations\n"
                          << RESET;
                line('=');
                if (history.empty())
                {
                    std::cout << DIM << "  (no history yet)\n"
                              << RESET;
                }
                else
                {
                    for (int i = (int)history.size() - 1; i >= 0; --i)
                    {
                        std::cout << "  " << BRIGHT_YELLOW
                                  << (history.size() - i) << ". "
                                  << BRIGHT_WHITE << history[i]
                                  << RESET << "\n";
                    }
                }
                line('=');
                std::cout << "\n";
                break;

            case 30:
                printHeader();
                continue;

            case 0:
                line('=');
                std::cout << BRIGHT_CYAN << BOLD
                          << "  Goodbye! Thanks for using SciCalc.\n"
                          << RESET;
                line('=');
                std::cout << "\n";
                return 0;

            default:
                showError("Invalid choice! Enter a number from 0 to 30.");
            }
        }
        catch (const std::exception &ex)
        {
            showError(ex.what());
        }

        pauseAndContinue();
    }

    return 0;
}
