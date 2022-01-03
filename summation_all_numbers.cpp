#include <iostream>
#include <conio.h>
using namespace std;

int main(){


    int sum = 0;

    int input_number;
    cout << "Please input any Positive Number : ";
    cin >> input_number;
    for(int i = 1; i <= input_number; i ++){
        sum += i;
    }
    cout << "Total Summation is : "<< sum;

    getch();
}
