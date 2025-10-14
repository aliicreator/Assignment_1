#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int a;
    int b;
    int c;

    cout << "Enter Value a: ";
    cin >> a;

    cout << "Enter Value b: ";
    cin >> b;

    cout << "Enter Value c: ";
    cin >> c;
    cout<<"_________________________________________________________"<<endl;

    if (a == b && b == c) {
        cout << "All numbers are equal: " << a << ", " << b << ", " << c << endl;
    }
    else if (a == b && a != c) {
        cout << "a and b are equal: " << a << endl;
        if (a > c)
            cout << a << " is the Greatest" << endl;
        else
            cout << c << " is the Greatest" << endl;
    }
    else if (b == c && b != a) {
        cout << "b and c are equal: " << b << endl;
        if (b > a)
            cout << b << " is the Greatest" << endl;
        else
            cout << a << " is the Greatest" << endl;
    }
    else if (a == c && a != b) {
        cout << "a and c are equal: " << a << endl;
        if (a > b)
            cout << a << " is the Greatest" << endl;
        else
            cout << b << " is the Greatest" << endl;
    }
    else {
        if (a >= b && a >= c)
            cout << a << " is the Largest" << endl;
        else if (b >= a && b >= c)
            cout << b << " is the Largest" << endl;
        else
            cout << c << " is the Largest" << endl;
        if (a <= b && a <= c)
            cout << a << " is the Smallest" << endl;
        else if (b <= a && b <= c)
            cout << b << " is the Smallest" << endl;
        else
            cout << c << " is the Smallest" << endl;

        cout << "All numbers are NOT equal" << endl;
    }

    return 0;
}