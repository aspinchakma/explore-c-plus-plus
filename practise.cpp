#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){

    int num1, num2;
    cout << "Please Enter First Number ";
    cin >> num1;
    cout << "\nPlease Enter Second Number ";
    cin >> num2;
    cout << showpoint;

    cout << fixed;
    cout << setprecision(2);
    float sum = num1 + num2;
    cout<<setw(20) << "\nSummation is " << sum;


    float substruction = num1-num2;
    cout<<setw(20) << "\nSubstraction Number is " << substruction;

    float multiplication = num1 * num2;
    cout<<setw(20) <<"\nTwo numbers multiplication is " << multiplication;

    float division =(float) num1 /num2;
    cout<<setw(20) <<"\nTwo numbers Division is " << division;



    getch();
}
