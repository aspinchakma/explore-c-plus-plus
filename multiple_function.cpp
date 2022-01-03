#include <iostream>
#include <conio.h>
using namespace std;

void subtraction(int , int);
void multiplication(int a, int b){
    int multi = a * b;
    cout << "Your Two Number Multiplication is = " << multi << endl;

}

void division(int, int);
void addition(int, int);

int main(){


    subtraction(30, 10);
    multiplication(9, 10);
    multiplication(20, 30);
    division(9,2);
    division(100, 16);
    addition(100, 30);
    addition(9, 88);

    getch();
}

void subtraction(int a , int b){

    int sub = a - b;

    cout << "Two Numbers Subtraction is = " << sub<< endl;

}

void division(int a, int b)
{

    float div = (float) a / b;
    cout << "Two Number Division is = " << div << endl;
}

void addition(int a, int b)
{

    int sum = a + b;

    cout << "Your Two Numbers Summation is : " << sum << endl;
}
