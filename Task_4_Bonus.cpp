#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // I am Using arithmetic rules for swaping now
    a = a + b;
    b = a - b;
// As "a" contains the addition of "a" & "b" so now for swaping value of a with b I'm gonna subtract value of "a" from it
    a = a - b;
    cout << "After swapping: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}