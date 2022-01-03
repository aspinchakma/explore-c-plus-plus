#include<iostream>
#include <conio.h>
using namespace std;

template <class MyAdditionFunctionTemplate, class MyAdditionFunctionTemplate2>

MyAdditionFunctionTemplate add (MyAdditionFunctionTemplate a, MyAdditionFunctionTemplate2 b)
{
    return a + b;
}

int main()
{
    cout << "Integer Value return " << add(20, 20) << endl;
    cout << "Double Value return " << add(20.6, 10) << endl;
    getch();
}
