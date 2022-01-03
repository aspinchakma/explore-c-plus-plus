//user দুইটি ম্যাট্রিক্স ইনপুট দিয়ে তার গুণফল বের করতে পারবে।

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

        int first_matrix[first_rows][first_cols];
        int second_matrix[second_rows][second_cols];


        // input first matrix
        cout << "For First Matrix : " << endl;
        for(int i = 0; i < first_rows; i ++)
        {

            cout << "Row Number is " << i + 1 << " And " << first_cols<< " Columns Are : ";
            for(int j = 0; j < first_cols; j ++)
            {

                cin >> first_matrix[i][j];
            }
        }

        // show first matrix :

        cout << "Your first matrix is : " << endl;

        for(int i = 0; i < first_rows; i ++)
        {

            for(int j = 0; j < first_cols; j ++)
            {
                cout << first_matrix[i][j] << " " ;

            }
            cout << endl;
        }

        // input second matrix :
        cout << "For Second Matrix : " << endl;
        for(int i = 0; i < second_rows; i ++)
        {

            cout << "Row Number is " << i + 1 << " And " << first_cols<< " Columns Are : ";
            for(int j = 0; j < second_cols; j ++)
            {

                cin >> second_matrix[i][j];
            }
        }

        // show second matrix

        cout << "Your Second Matrix is : " << endl;
        for(int i = 0; i <second_rows; i ++)
        {

            for(int j = 0; j < second_cols; j++)
            {
                cout << second_matrix[i][j] << " ";
            }
            cout << endl;
        }

        // Create New matrix:

        int new_rows = first_rows;
        int new_cols = second_cols;
        int new_matrix[new_rows][new_cols];

        // Multiplication between two matrix:

        cout << "Two Matrix Multiplication is : " << endl;
        for(int i = 0; i < new_rows; i ++)
        {

            for(int j = 0; j < new_cols; j++)
            {
                int sum = 0;

                for(int m = 0; m < second_rows; m ++)
                {

                    sum +=  first_matrix[i][m] * second_matrix[m][j];

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
        cout << "The column number of the 1st matrix and the row number of the 2nd matrix must be equal";
    }

    getch();
}
