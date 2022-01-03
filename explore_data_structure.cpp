#include<iostream>
#include<conio.h>
using namespace std;
int linear_search(int A[], int n, int x)
{
    int i;
    for(i = 0; i < n; i ++)
    {

        if(A[i] == x)
        {
            cout << "Element is present at index " <<i;
            return 0;
        }
    }
    cout << "Element is not present in array" << endl;
}

int main()
{
    int element_numbers, find_number;
    cout << "How many elements ? : ";
    cin >> element_numbers;

    int my_array[element_numbers];

    cout << "Enter the elements of the array : " <<endl;

    for(int i = 0; i <element_numbers; i++)
    {
        cin >> my_array[i];
    }

    cout << "Enter the element to search : ";
    cin>> find_number;
    linear_search(my_array, element_numbers, find_number);

    getch();
}
