#include <iostream>

using namespace std;

int main()
{
    int i = 9;
    int* pi = &i;       // The address of i
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
    return 0;
}