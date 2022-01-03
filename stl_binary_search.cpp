#include<bits/stdc++.h>
using namespace std;

int main()
{

    int my_array[7] = {11, 44, 22, 33, 66, 77, 99};
    sort(my_array, my_array+ 7);

    cout << binary_search(my_array, my_array+7, 220) << endl;


    return 0;
}
