#include <iostream>
using namespace std;

int main ()
{
    int numStudents, prize = 10500000;
    float sharePerStudent, prizeAfterTax;

    // Title in English
    cout << "Prize Distribution After Tax for Each Student" << endl;
    cout << "-----------------------------------------------" << endl;

    cout << "Enter the Number of Students = ";
    cin >> numStudents;
    cout << endl;

    // Calculate the prize after tax (20%)
    prizeAfterTax = prize - (prize * 20 / 100);

    // Calculate each student's share
    sharePerStudent = prizeAfterTax / numStudents;

    cout << "Each Student's Share = Rp." << sharePerStudent;
    cout << endl;

    return 0;
}
