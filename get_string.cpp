#include <iostream>
#include<stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    char full_name[20];
    cout << "Enter Your Full Name : ";
    gets(full_name);

    cout << "Welcome "<< full_name;
    getch();
}
