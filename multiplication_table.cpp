#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int number;
    cout << "Input Any Number Brother : ";
    cin >> number;

    for (int i = 1; i <= 10; i ++){

        cout << number << " * " << i << " = " << number*i << endl;
    }

    getch();
}
