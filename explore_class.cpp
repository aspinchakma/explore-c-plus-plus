#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout << "Aspin Chakma id is : " << id << " And " << " HSC GPA is " << gpa << endl;

    }
};

int main()
{
    Student Aspin;
    Aspin.id = 220;
    Aspin.gpa = 4.33;

    Aspin.display();

    getch();
}
