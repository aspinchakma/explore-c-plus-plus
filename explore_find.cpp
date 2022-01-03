#include<bits/stdc++.h>
using namespace std;

int main()
{

    int elements_number;
    cout << "How many Element ? : ";
    cin >> elements_number;
    int my_array[elements_number];
    cout << "Please input elements number value : ";
    for(int i = 0; i < elements_number; i ++)
    {
        cin >> my_array[i];
    }

    int find_number;
    cout << "Please input find number : " ;
    cin >> find_number;


    int index_number = find(my_array, my_array + elements_number, find_number) - my_array;
    if(find_number < 8)
    {
        cout << "Found at position : " << index_number << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
