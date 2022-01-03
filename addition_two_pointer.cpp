#include <iostream>
#include <conio.h>
using namespace std;

int main(){


    int num1 = 10;
    int num2 = 20;
    int *pointer1 = &num1;
    int *pointer2 = &num2;
    cout << "Addition between two pointer is : " << *pointer1 + *pointer2 << endl;


    getch();
}
