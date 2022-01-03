#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int numb1;
    cout << "Please Enter Your One Number : ";
    cin >> numb1;
    if(numb1>0)
    {
        cout <<"Your Input Number is positive number"<< endl;
    }
    else if(numb1==0)
    {
        cout << "Your Input Number is Zero"<< endl;
    }
    else
    {
        cout << "Your Input Number is Negative Number"<< endl;
    }
    for (int i = 1; i<= 10; i++)
    {
        cout << i << ". Moanoghar Residential School"<< endl;
    }
    getch();
}
