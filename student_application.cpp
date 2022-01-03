//c++ এর স্বাধ নেয়ার চেষ্টা :

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int n;
    cout << "Total Student Number is : " ;
    cin >> n;

    int marks[n];

    for (int i = 0; i< n; i ++)
    {

        cout << "Marks For : " << i + 1 << "  =  ";
        cin >> marks[i];
    }
    // total marks summation :

    int sum = 0;

    for(int i = 0; i < n; i ++)
    {
        sum += marks[i];

    }
    cout << "Total Marks is : " << sum << endl;
    cout << "Average Number is : " << (float)sum/n<< endl;




    int big = 0;
    int second_big = 0;
    int smallest_number = marks[0];
    for (int i = 0; i < n; i ++)
    {

        // find out biggest and second biggest number from an array :
        if(big< marks[i])
        {
            second_big = big;
            big = marks[i];
        }
        else if(big > second_big && second_big < marks[i])
        {

            second_big = marks[i];
        }

        // find out lowest number from an array :
        if(smallest_number >marks[i])
        {
            smallest_number = marks[i];
        }
    }
    cout << "Biggest Number is : " << big << endl;
    cout << "Second Biggest Number is : " << second_big << endl;
    cout << "Lowest Number is : " << smallest_number << endl;

    getch();
}
