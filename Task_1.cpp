#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a;
    float b;
    cout<<"GIVEN DATA:- "<<endl<<endl;
    cout<< "Enter Number a: ";
    cin>> a;
    cout<< "Enter Number b: ";
    cin>> b;
    cout<<"SOLUTION:-"<<endl<<endl;
    float sum=a+b;
    cout<<a<<"+"<<b<<" = "<<sum<<right<<setw(05)<<"->"<<right<<setw(15)<<"TOTAL"<<endl<<endl;
    float dif=a-b;
    cout<<a<<"-"<<b<<" = "<<dif<<right<<setw(05)<<"->"<<right<<setw(20)<<"DIFFERENCE"<<endl<<endl;
    float product=a*b;
    cout<<a<<"x"<<b<<" = "<<product<<right<<setw(05)<<"->"<<right<<setw(16)<<"PRODUCT"<<endl<<endl;
    float quotient=(float)a/b;
    cout<<fixed<<setprecision(3);
    cout<<a<<"/"<<b<<" = "<<quotient<<right<<setw(05)<<"->"<<right<<setw(18)<<"QUOTIENT"<<endl<<endl;
        // ======= INTEGER OPERATIONS (AFTER CASTING) =======
    cout << "NOW, USING INTEGER VALUES (AFTER CASTING):" << endl << endl;

    int intA = (int)a;  // Cast float to int (decimal part removed)
    int intB = (int)b;

    cout << "Integer a = " << intA << endl;
    cout << "Integer b = " << intB << endl << endl;

    cout << intA << " + " << intB << " = " << intA + intB << "  -> TOTAL" << endl;
    cout << intA << " - " << intB << " = " << intA - intB << "  -> DIFFERENCE" << endl;
    cout << intA << " x " << intB << " = " << intA * intB << "  -> PRODUCT" << endl;

    if (intB != 0)
        cout << intA << " / " << intB << " = " << (float)intA / intB << "  -> QUOTIENT" << endl;
    else
        cout << intA << " / " << intB << " = Undefined (division by zero)" << endl;

    cout << endl << "---------------------------------------------" << endl;
    cout << "Note:" << endl;
    cout << "When the numbers are converted to integers, their decimal parts are dropped." << endl;
    cout << "This changes the results, especially for division and subtraction." << endl;
    cout << "For example, 5.9 becomes 5 and 2.3 becomes 2." << endl;
    cout << "---------------------------------------------" << endl << endl;

    cout<<right<<setw(35)<<"~By Muhmd Ali Abbas~"<<endl<<endl;
    cout<<"|-><-><-><-><-><-><-><-THANK YOU-><-><-><-><-><-><-><-|"<<endl;
   
    return 0;
}