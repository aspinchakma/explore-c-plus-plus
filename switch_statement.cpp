#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    cout << "Please input one number : ";
    int number;
    cin >> number;

    switch(number)
    {
    case 0:
        cout << "ZERO";
        break;
    case 1:
        cout << "ONE";
        break;
    case 2:
        cout << "TWO";
        break;
    case 3:
        cout << "THREE";
        break;
    case 4:
        cout << "FOUR";
        break;
    case 5:
        cout << "FIVE";
        break;
    case 6:
        cout << "SIX";
        break;
    case 7:
        cout << "SEVEN";
        break;
    case 8:
        cout << "EIGHT";
        break;
    case 9:
        cout << "NINE";
        break;
    default:
        cout << "Please Input One Number Brothers";
    }


    getch();
}
