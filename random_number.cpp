#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){



    for(int i = 1; i <= 5; i ++)
    {
       int random_number = rand() %5 +1;
    cout << "Random Number is : " << random_number << endl;

    }

    getch();
}
