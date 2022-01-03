#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char letter;
    cout << "Please Enter Your One Letter ";
    cin>> letter;
    if(letter =='a' || letter =='e' || letter =='i' || letter =='o' || letter == 'u')
    {
        cout << "Your Letter is vowel Brother";
    }
    else if(letter =='A' || letter =='E' || letter =='I' || letter =='O' || letter == 'U')
    {
        cout << "Your Letter is vowel brother";
    }
    else
    {
        cout << "Your Letter is not vowel brother";
    }

    getch();
}
