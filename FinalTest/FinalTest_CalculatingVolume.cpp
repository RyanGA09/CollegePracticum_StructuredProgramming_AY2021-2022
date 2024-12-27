// FinalTest_CalculatingVolume.cpp

#include "FinalTest_CalculatingVolume.h"

char word[10];
int number;

int main()
{
    cout << "Calculating Volume\n";
    cout << "Menu:\n";
    cout << "1. Calculate Volume of Rectangular Prism\n";
    cout << "2. View Rectangular Prism Volume Results\n";
    cout << "3. Calculate Volume of Cube\n";
    cout << "4. View Cube Volume Results\n";
    cout << "5. Summing Volumes\n";
    cout << "Enter a word: "; cin.getline(word, 10);
    cout << "Enter a number to begin: "; in >> number;
    
    // Call the function to calculate volumes based on the input choice
    if (number == 1) {
        calculateVolume();
    }
    else {
        cout << "Error\n";
    }
    
    cout << "\n";
    cout << "PROGRAM ENDED";
}
