#include<iostream>
#include <conio.h>
using namespace std;

int main(){

    int a, b, c;
    cout << "Please Enter Three Number : ";
    cin >> a>> b>> c;

    if(a>b & a>c){
        cout << "Your Largest Number is : " << a;
    }else if(b >a & b > c){
        cout << "Your Largest Number is : " << b;
    }else{
        cout << "your Largest Number is : " << c;
    }
    cout << "\nThank Your Brother";
    getch();
}
