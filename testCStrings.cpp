#include <iostream>
#include "cStrings.h"

using namespace std;

// Constants, Structure, Classes

// Prototypes

// Main Program Program

int main()
{
    char str1[] = "Defined a string as an array";       // Defined as constant string
    char* str2 = "Defined as a pointer";        // Just a pointer

    cout << str1 << endl;
    cout << str2 << endl;

    // str1++; Can't do this-- str1 is a constant
    str2++;     // Okay, it is a pointer

    cout << str1 << endl;
    cout << str2 << endl;

    str2++;
    cout << str2 << endl;

    str2--;
    cout<< str2 << endl;

    displayString(str1);
    return 0;

}
