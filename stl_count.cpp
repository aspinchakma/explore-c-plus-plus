#include<bits/stdc++.h>
using namespace std;

int main()
{

    int my_array[5] = {2, 2, 3, 3,3 };

    cout << "Count Number is : " << count(my_array, my_array+5, 2) << endl;
    cout << "Count Number is : " << count(my_array, my_array+5, 3) << endl;
    cout << "Count Number is : " << count(my_array, my_array+5, 10) << endl;

    return 0;
}
