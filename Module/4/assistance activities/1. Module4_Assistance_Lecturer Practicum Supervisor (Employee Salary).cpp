#include <iostream>
using namespace std;

// Global variables
string Name;
int Absence, Age, TotalAbsence, TotalSalary, WorkHours = 8, TotalWorkHours = 160;

// Function to calculate and display the salary details
void calculateSalary(int Absence)
{
    // Input
    cout << "INPUT" << endl << endl;
    cout << "Name = ";
    getline(cin, Name);
    cout << "Age = ";
    cin >> Age;
    cout << "Absence = ";
    cin >> Absence;
    
    // Calculating total absence salary and total salary
    TotalAbsence = (Absence * WorkHours * 50000);
    TotalSalary = (TotalWorkHours * 50000) - TotalAbsence;
    
    // Output of absence and salary
    cout << "Total Absence = Rp " << TotalAbsence << endl;
    cout << "Total Salary = Rp " << TotalSalary << endl << endl;
    
    // Displaying final output
    cout << "OUTPUT" << endl << endl;
    cout << "Name = " << Name << endl; 
    cout << "Age = " << Age << endl;
    cout << "Total Salary = Rp " << TotalSalary << endl;
}

int main()
{
    int Absence;
    
    cout << "==============================" << endl;
    cout << "          Employee Salary     " << endl;
    cout << "==============================" << endl << endl;
    
    // Calling function to input and calculate salary
    calculateSalary(Absence);
    
    return 0;
}
