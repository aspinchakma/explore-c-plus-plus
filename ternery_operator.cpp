#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    int a, b;
    cout << "Please Enter Any Two  Number";
    cin >> a >> b;
    int result = a > b ? a : b;
    cout << result ;

    getch();
}
