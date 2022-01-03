#include<iostream>
#include<conio.h>
using namespace std;

void summation(int a , int b, int c)
{
    int sum = a + b + c;
    cout << "Your Three Number Summation is : " << sum << endl;


}
void summation(int a, int b)
{
    int sum = a + b;
    cout << "Your Two Number summation is : " << sum << endl;
}

int main(){

summation(33, 30);
summation(10, 20, 30);



    getch();
}
