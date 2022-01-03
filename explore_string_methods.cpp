#include<iostream>
#include<conio.h>
#include <cstring>

using namespace std;

int main()
{
    char name[] = "Aspin Chakma";
    char name2[30] ;
    // find out string length
    int name_length = strlen(name);
    cout << "Name Length is : " << name_length << endl;

    // copy string
    strcpy(name2, name);

    cout << "copy Name is : " << name2 << endl;

    getch();
}
