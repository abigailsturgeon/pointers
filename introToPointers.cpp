#include <iostream>

using namespace std;

const int LEN = 5;

void increment(int *inc);
void incrementArray(int *inc);

int main()
{
    int i = 9;
    int* pi = &i;       // The address of i

    int iarr[LEN] = {31, 45, 78, 99, -8};
    int* piarr;
    // Do not use the & operator on arrays because the array is already an address
    piarr = iarr;       // Get the address of the array, or element 0

    cout << "Value of i is: " << i << endl;
    cout << "The address of i is: " << &i << endl;
    cout << "Value of pi is: " << pi << endl;

    // Never use because you usually only want the address of the variable
    // Not the address of the pointer
    cout << "The address of pi is: " << &pi << endl;

    // Display the value living at pi (the address)
    // Dereference operator *
    cout << "Value of the address living at pi is: " << *pi << endl;

    i = 10;
    cout << "Value of i is: " << i << endl;
    cout << "Value of the address living at pi is: " << *pi << endl;

    // Modify value using pointer
    *pi = 11;
    cout << "Value of i is: " << i << endl;
    cout << "Value of the address living at pi is: " << *pi << endl;

    // Loop over array
    for(int i = 0; i < LEN; i++)
    {
        cout << iarr[i] << endl;
    }
    // The name of the array is the address of the first element of the array
    // Or the array itself
    // Not a very common way
    for(int i = 0; i < LEN; i++)
    {
        cout << *(iarr + i) << endl;
    }
    // A more common way
    for(int i = 0; i < LEN; i++)
    {
        cout << *(piarr++) << endl;
    }
    increment(pi);
    cout << "Value of i is: " << i << endl;
    cout << "Value of the address living at pi is: " << *pi << endl;
    // Update all elements of the array
    incrementArray(iarr);
    for(int i = 0; i < LEN; i++)
    {
        cout << iarr[i] << endl;
    }
    return 0;
}
void increment(int *inc)
{
    // Increment integer
    *inc += 1;      // Points at the element of the array
}
void incrementArray(int *inc)
{
    for(int i = 0; i < LEN; i++)
    {
        *inc++ += 1;
    }
}