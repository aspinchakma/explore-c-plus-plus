#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int sum = 0, even_number;
    cout << "Please input last even number : ";
    cin >> even_number;
    for(int i = 0; i <= even_number; i= i + 2){

        sum += i;
    }
    cout << "Your result is : " << sum;


    getch();
}
