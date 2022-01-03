#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int two_dimensional_array[3][4] = {

    {1, 2, 3, 4},
    {11, 22, 33, 44},
    {111, 222, 333, 444}
    };
    for(int i = 0; i <= 2; i ++){

        for(int j = 0; j <= 3; j ++){
            cout << two_dimensional_array[i][j]<< " ";
        }
        cout << endl;
    }




    getch();
}
