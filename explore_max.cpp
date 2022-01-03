#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main()
{
    int a = 4, b = 6;
    cout << "Max Number is : " << max(a,b) << endl;
    cout << "Max Number is : " << max({1, 2, 3, 4, 5, 6, 7, 8, 9, 99}) << endl;

    int my_array[6] = {1, 2, 3, 4, 5, 66};
    cout << "Max number is : " << max_element(my_array, my_array+6) - my_array << endl;


    getch();
}
