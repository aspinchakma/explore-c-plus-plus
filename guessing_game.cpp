#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main(){

   while(true)
   {
        int random_number;
    int guess_number;
    cout << "Enter Your Guess Number between 1 to 5 : ";
    cin >> guess_number;

    random_number = rand()%5 + 1;

    if(guess_number == random_number)
    {
        cout << "You Have Won " << endl;

    }
    else
    {
        cout << "You Have Lost. Try Again" << endl;
        cout << "Random Number was : " << random_number << endl;

    }



   }
   getch();
}
