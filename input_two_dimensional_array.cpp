#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{

    int rows, cols;
    cout << "Please Input Rows Number And Columns Number : ";
    cin >> rows >> cols;
    int my_array[rows][cols];


    for(int i = 0; i < rows; i ++)
    {
        cout << "Please Input columns number " << i+1 << " : " ;
        for(int j = 0; j < cols; j ++)
        {
            cin >> my_array[i][j];
        }
    }


    for(int k = 0; k <rows; k ++)
    {
        for(int l = 0; l <cols; l ++)
        {
            cout << my_array[k][l] << " ";
        }
        cout << endl;
    }

    // search number using row and column number
    int x, y;
    cout << "Please Input Row And Column Number : ";
    cin >> x>> y;

    cout << "Your Result Is : " << my_array[x][y];


    getch();
}
