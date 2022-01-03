#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int first_rows, first_cols, second_rows, second_cols;
    cout << "Please input first matrix rows number and columns number : ";
    cin >> first_rows >> first_cols;

    cout << "Please input second matrix rows number and columns number : ";
    cin >> second_rows >> second_cols;

    if(first_cols == second_rows)
    {

        // create first matrix:
        int first_matrix[first_rows][first_cols];

        // input for first matrix from user
        cout << "First Matrix" << endl;
        for(int i = 0; i < first_rows; i ++)
        {

            cout << "Row Number is : "<< i+1 << " And " << first_cols << " columns Are = ";
            for (int j = 0; j < first_cols; j ++)
            {

                cin >> first_matrix[first_rows][first_cols];
            }
        }
        // create second matrix:
        int second_matrix[second_rows][second_cols];
        cout << "Second Matrix" << endl;
        for(int i = 0; i < second_rows; i ++)
        {

            cout << "Row Number is : "<< i+1 << " And " << second_cols << " columns Are = ";
            for(int j = 0; j < second_cols; j ++)
            {

                cin >> second_matrix[second_rows][second_cols] ;

            }
        }


        // show first matrix :
        for(int i = 0; i < first_rows; i ++){

            for(int j = 0; j < first_cols; j++){

                cout << first_matrix[i][j] << " ";
            }
        }



        // Create New matrix:

        int new_rows = first_rows;
        int new_cols = second_cols;
        int new_matrix[new_rows][new_cols];

        // Multiplication between two matrix:

        for(int i = 0; i < new_rows; i ++)
        {

            for(int j = 0; j < new_cols; j++)
            {
                int sum = 0;

                for(int m = 0; m < first_cols; m ++)
                {
                    cout << "first matrix " << first_matrix[0][0]; // we cannot access first matrix

                    sum +=  first_matrix[j][m] * second_matrix[m][j];

                    cout << first_matrix[j][m] << " *  " << second_matrix[m][j] << endl;

                }

                new_matrix[i][j] = sum;

            }
        }

        // show new matrix


        cout << "New Matrix is : " << endl;
        for(int i = 0; i < new_rows; i ++)
        {

            for(int j = 0; j < new_cols; j++)
            {
                cout << new_matrix[i][j] << " ";
            }
            cout << endl;
        }




    }
    else
    {
        cout << "Please Try Again. Thank You !";
    }


    getch();
}
