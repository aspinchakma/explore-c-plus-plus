#include<iostream>
#include <conio.h>
using namespace std;

void addition(int a=0, int b=0)
{
    int sum = a + b;
    cout << "Two Number Summation is : " << sum << endl;

}

void multiplication(int a = 1, int b = 1)
{
    int multi = a * b;
    cout << "Your Two Numbers Multiplication is : " << multi << endl;
}

int main(){


    addition();
    addition(9, 8);
    addition(102);
    multiplication();
    multiplication(9);
    multiplication(8, 9);

    getch();
}



