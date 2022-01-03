#include<iostream>
#include <conio.h>

using namespace std;

class Person
{
    public:
    string name;
    int id ;
    void display()
    {

        cout << "id : " << id << endl;
        cout << "Name : " << name << endl;
    }
};
class Student: Person
{
    public:
    double gpa;
    void display2 ()
    {

        cout << "Gpa : " << gpa << endl;
        display();
    }
    Student(string student_name, int student_id, double student_gpa)
    {
    gpa =student_gpa;
    name = student_name;
    id = student_id;
    }
};

int main()
{
    Student Aspin("Aspin Chakma", 201, 4.68);
    Aspin.display2();
    getch();
}
