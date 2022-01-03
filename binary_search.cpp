#include <iostream>
#include <conio.h>
using namespace std;

int binary_search_array(int my_array[],int elements_number,int find_number)
{
    int left, right, mid;
    left = 0;
    right = elements_number-1;
    while(left <= right)
    {
        mid = (left + right) /2;
        if(my_array[mid] == find_number)
        {
            return mid;
        }
        if(find_number > my_array[mid])
        {
            left = mid+1;
        }
        else
        {
            right = mid - 1;
        }
    }
}


int main()
{
    int elements_number, find_number
    ;
    cout << "How many elements ? : ";
    cin >> elements_number;
    int my_array[elements_number];
    cout << "Enter the elements of the array : " << endl;
    for(int i = 0; i <elements_number; i ++)
    {
        cin >> my_array[i];
    }
    cout << "Enter the element to search : ";
    cin >> find_number;
    int result = binary_search_array(my_array, elements_number, find_number);
    cout << "Element is present at index : :" << result;

    getch();
}
