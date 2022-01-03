#include <iostream>
#include <conio.h>
using namespace std;
int main() {
int mainNumber;
cout << "Please input one number ";
cin >> mainNumber;
mainNumber += 5;
cout << "main number = main number + 5 And Result is = "<< mainNumber<< endl;

mainNumber -= 10;
cout << "Main Number = Main Number - 10 And Result is = " << mainNumber<< endl;

mainNumber *= 5;
cout << "Main Number = Main Number * 5 And Result is = " << mainNumber<< endl;

mainNumber /= 2;
cout << "Main Number = Main Number / 2 And Result is = " << mainNumber<< endl;

mainNumber %= 2;
cout << "Main Number = Main Number % 2 And Result is = " << mainNumber<< endl;
getch();
}
