#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int year;
    cout << "Please Enter Any Year : ";
    cin >> year;

    if(year %4 == 0 && year %100 !=0)
    {
        cout << year << " Is A Leap Year Brother";
    }
    else if(year % 400 ==0)
    {

        cout << year << " is A Leap Year Brother";
    }
    else
    {
        cout << year << " is not a leap year brother";
    }


    getch();
}
