#include <iostream>
#include <conio.h>

using namespace std;

void display_array(int num[], int array_size)
{
    for(int i = 0; i < array_size; i ++){
        cout << num[i] << endl;
    }
}


int main()
{
    int number[5] = {10, 20, 30, 40, 50};
    display_array(number, 5);
    int result [2] = {2,2};
    display_array(result, 2);


    getch();
}
