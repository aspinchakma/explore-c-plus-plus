#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
public:
    int id ;
    double gpa;

    void display(char name[20],int student_id,double student_gpa)

    {   id = student_id;
        gpa = student_gpa;
        cout << name << " id is  " << id << " And He got GPA : " << gpa << endl;
    }
};

int main()
{
    Student Aspin;

    Aspin.display("Aspin Chakma", 231447, 4.68);
    getch();
}
