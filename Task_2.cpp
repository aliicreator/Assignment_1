#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    float E;
    float Et;
    float P;
    float Pt;
    float B;
    float Bt;
    float U;
    float Ut;
    float C;
    float Ct;

    cout << "Enter Your English Obtain Marks: ";
    cin >> E;
    cout << "Enter Your English Total Marks: ";
    cin >> Et;

    cout << "Enter Your Physics Obtain Marks: ";
    cin >> P;
    cout << "Enter Your Physics Total Marks: ";
    cin >> Pt;

    cout << "Enter Your Biology Obtain Marks: ";
    cin >> B;
    cout << "Enter Your Biology Total Marks: ";
    cin >> Bt;

    cout << "Enter Your Urdu Obtain Marks: ";
    cin >> U;
    cout << "Enter Your Urdu Total Marks: ";
    cin >> Ut;

    cout << "Enter Your Chemistry Obtain Marks: ";
    cin >> C;
    cout << "Enter Your Chemistry Total Marks: ";
    cin >> Ct;

    float totalobtained = E + P + B + U + C;
    float totalmarks = Et + Pt + Bt + Ut + Ct;
    float percentage = (totalobtained / totalmarks) * 100;

    string grade;
    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80 && percentage < 90)
        grade = "A";
    else if (percentage >= 70 && percentage < 80)
        grade = "B";
    else if (percentage >= 60 && percentage < 70)
        grade = "C";
    else if (percentage >= 50 && percentage < 60)
        grade = "D";
    else
        grade = "F";

    string status = (percentage >= 50) ? "Pass" : "Fail";

    // Making Report Card
    cout << "\n---------------------- REPORT CARD ----------------------\n";
    cout << left << setw(20) << "Subject"
         << right << setw(15) << "Obtained"
         << right << setw(15) << "Total" << endl;
    cout << "----------------------------------------------------------\n";

    cout << left << setw(20) << "English"   << right << setw(15) << E  << setw(15) << Et << endl;
    cout << left << setw(20) << "Physics"   << right << setw(15) << P  << setw(15) << Pt << endl;
    cout << left << setw(20) << "Biology"   << right << setw(15) << B  << setw(15) << Bt << endl;
    cout << left << setw(20) << "Urdu"      << right << setw(15) << U  << setw(15) << Ut << endl;
    cout << left << setw(20) << "Chemistry" << right << setw(15) << C  << setw(15) << Ct << endl;

    cout << "----------------------------------------------------------\n";
    cout << left << setw(20) << "Total Marks" << right << setw(15) << totalobtained << setw(15) << totalmarks << endl;
    cout << left << setw(20) << "Percentage"  << right << setw(15) << fixed << setprecision(2) << percentage << "%" << endl;
    cout << left << setw(20) << "Grade"       << right << setw(15) << grade << endl;
    cout << left << setw(20) << "Status"      << right << setw(15) << status << endl;
    cout << "----------------------------------------------------------\n";

    return 0;
}
