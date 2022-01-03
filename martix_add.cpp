#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int rows, cols;
    cout << "Please input row number and column number : ";
    cin >> rows >> cols;

    int first_matrix[rows] [cols];
    int second_matrix[rows] [cols];

    // input for first matrix from user:
    cout << "Please Input For First matrix " << endl<< endl;
    for(int i = 0; i <rows; i++)
    {

        cout << "Row Number is : "<< i+1 << " And " << cols << " columns Are = ";
        for(int j = 0; j < cols; j++)
        {

            cin >> first_matrix[i][j];
        }
    }

    // input fro second matrix from user:
    cout << "Please Input For Second matrix"<< endl << endl;
    for(int i = 0; i <rows; i++)
    {

        cout << "Row Number is : "<< i+1 << " And " << cols << " columns Are = ";
        for(int j = 0; j < cols; j++)
        {

            cin >> second_matrix[i][j];
        }
    }

    // new matrix
    int new_matrix[rows][cols];

    // addition between two matrix
    // loop for rows
    cout << "New matrix is " << endl;
    for(int i = 0; i < rows; i ++)
    {
        // loop for columns
        for(int j = 0; j < cols; j++)
        {
            new_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];
            cout << new_matrix[i][j] << " " ;
        }
        cout << endl;
    }




    getch();
}
