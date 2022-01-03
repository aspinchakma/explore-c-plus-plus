#include <iostream>
#include <conio.h>
using namespace std;

int addition(int, int);
int main(){

    int summation_two_number = addition(10, 30);
    cout << "Two Number Summation is : " << summation_two_number;

    getch();
}

int addition(int a, int b)
{
    int sum = a + b;

    return sum;
}
