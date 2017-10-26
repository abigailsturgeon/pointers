//
// Created by Owner on 10/26/2017.
//
#include<iostream>
using namespace std;
#include "cStrings.h"

/*!
 * Display an array of characters, one char at a time
 * @param ptr: pointer to string or array of chars
 */
void displayString(const char *ptr)
{
    while(*ptr)     // Test for null character
    {
        cout << *ptr++;
    }
    cout << endl;
}
