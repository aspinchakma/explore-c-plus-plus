#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int num ;
    cout << "Please Enter Your Subject Result ";
    cin >> num;

    if(num>=80)
    {
        cout << "You Bro A+ Bro"<<endl;
    }
    else if(num<80 && num >=70)
    {
        cout <<"You Got A Bro"<< endl;
    }
    else if (num <70 && num>= 60)
    {
        cout << "You Got A- Bro"<< endl;
    }
    else if(num <60 && num >=50)
    {
        cout << "You Got B Bro"<< endl;
    }
    else if(num<50 && num>=40)
    {
        cout << "You Got C Bro"<< endl;
    }
    else if(num >=33 &num <40)
    {
        cout <<"You Got D Bro"<< endl;
    }
    else
    {
        cout << "Sorry Bro? You Failed in this admission";
    }

    getch();
}
