#include<bits/stdc++.h>
using namespace std;

int main()
{
    int my_array[5] = {6,5, 4, 99, 1};
    cout << "Before : " << endl;
    int i ;

    for(i = 0; i < 5;  i ++){
        cout << my_array[i] << " ";
    }
    cout << endl;

    sort(my_array, my_array+5);

    cout << "After : " << endl;
    for(i = 0; i < 5;  i ++){
        cout << my_array[i] << " ";
    }

    return 0;
}
