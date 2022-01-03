#include <iostream>
#include <conio.h>
using namespace std;

int main(){
double fahrenheit, celsius, first;
cout << "Please Input Fahrenheit ";
cin >> fahrenheit;
first = fahrenheit - 32;
celsius = first / 1.8;
cout << "Celsius Is "<< celsius;

getch();
}
