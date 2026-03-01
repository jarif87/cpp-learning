#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollno;

public:
    void set_number(int a)
    {
        rollno = a;
    }
    void print_number()
    {
        cout << "Roll number: " << rollno << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "Marks in maths: " << maths << endl;
        cout << "Marks in physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Sports score: " << score << endl;
    }
};

class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        cout << "Total score: " << total << endl;
        print_number();
        print_marks();
        print_score();
        total = maths + physics + score;
        cout << "Total score: " << total << endl;
    }
};

int main()
{
    Result student1;
    student1.set_number(101);
    student1.set_marks(85.5, 90.0);
    student1.set_score(8.5);
    student1.display();

    return 0;
}