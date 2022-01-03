#include <iostream>
#include <conio.h>
using namespace std;

// factorial function

int factorial(int n)
{   int result;
    if(n == 1){
        return 1;
    }
    return result = n * factorial(n-1);
}

int main(){



    // find out 10 factorial math
    int n ;
    cout << "Input Any Integer Number of last factorial Number : ";
    cin >> n;
    cout << "\n" << n << "Factorial Is : " << factorial(n);



    getch();
}
