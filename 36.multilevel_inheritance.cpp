#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int);
    void get_roll_no();
};

void Student::set_roll_no(int r)
{
    roll_no = r;
}

void Student::get_roll_no()
{
    cout << "Roll No: " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float marks;
    float physics;
    float chemistry;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float p, float c)
{
    physics = p;
    chemistry = c;
    marks = (physics + chemistry) / 2;
}

void Exam::get_marks()
{
    cout << "Physics: " << physics << endl;
    cout << "Chemistry: " << chemistry << endl;
    cout << "Marks: " << marks << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_no();
        get_marks();
        percentage = marks; // Assuming marks is already calculated as percentage
        cout << "Percentage: " << marks << "%" << endl;
    }
};
int main()
{
    Result r1;
    r1.set_roll_no(101);
    r1.set_marks(85.5, 90.0);
    r1.display_result();

    return 0;
}