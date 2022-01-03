#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
public:
    int id;
    double gpa;
    void display ()
    {
        cout << id << "  " << gpa << endl;


    }
    Student(int x , double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{
    Student Aspin(222, 4.68);
    Aspin.display();

    getch();
}
