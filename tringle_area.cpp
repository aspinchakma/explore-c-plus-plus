#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    double base, height,area;
    cout << "Please Input Triangle Base: ";
    cin >> base;

    cout << "Please Input Triangle Height: ";
    cin>> height;

    area = 0.5 * base * height;
    cout << "Triangle Area Is :" << area;


getch();
}
