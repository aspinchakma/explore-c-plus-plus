#include <iostream>
#include <conio.h>
using namespace std;

int main (){

    cout << "Please Enter One Letter : ";
    char letter;

    cin >> letter;
    letter = tolower(letter);
    switch(letter){
    case 'a':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;
    default :
        cout << "Consonant";


    }


    getch();
}
