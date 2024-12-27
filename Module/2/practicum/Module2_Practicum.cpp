#include <iostream>
using namespace std;

int main()
{
    int size;  // Square size
    string stars = " *", plusSigns = " +";

    cout << "Program to create a square (Number - Star - Plus)" << endl << endl;
    cout << "Enter the size of the square: ";
    cin >> size;
    cout << endl;

    // Construct the row with stars and plus signs
    for (int i = 2; i < size; i++) {
        if (i < size - 1) {
            stars = stars + " *";  // Add stars to the row
        }
    }
    stars = stars + " +";  // Add the plus sign at the end of the stars row

    // Construct the row with plus signs
    for (int i = 2; i < size; i++) {
        if (i < size) {
            plusSigns = plusSigns + " +";  // Add plus signs to the row
        }
    }

    // Print the numbers in the first row
    for (int i = 1; i <= size; i++) {
        cout << i << " ";
    }

    // Print the square rows with stars and plus signs
    for (int i = 2; i <= size; i++) {
        cout << endl;
        if (i < size) {
            cout << i << stars;  // Print the star row
        }
        if (i == size) {
            cout << i << plusSigns;  // Print the plus sign row at the end
        }
    }

    return 0;
}
