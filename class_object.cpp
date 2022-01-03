#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
public:
    int id;
    double gpa;
};


int main()
{
    Student Aspin;
    Aspin.id = 1001;
    Aspin.gpa = 4.68;

    Student Dipongkar;
    Dipongkar.id = 22220;
    Dipongkar.gpa = 4.33;

    cout << "Aspin Chakma " << Aspin.id << " And " << Aspin.gpa << endl;
    cout << "Dipongkar Chakma Id : " << Dipongkar.id << " And Gpa : " << Dipongkar.gpa << endl;

    getch();
}
