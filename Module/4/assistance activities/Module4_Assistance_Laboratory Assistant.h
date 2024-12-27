// Module4_Assistance_Laboratory Assistant.h
#define output cout
#define jika if
#define lain else
#define ganti endl

#include <iostream>
using namespace std;

// Variables for controlling the loops
int y = 1, x = 1;

// Function to print the letter 'R'
void R()
{
    jika (y <= 5) {  // Loop for rows
        jika (x <= 5) {  // Loop for columns
            // Condition to print '*' to form the letter 'R'
            jika (y == 3 || y == 1 || x == 1 || x == 5 && y <= 3 || y == x && y > 3)
                output << "*"; 
            lain
                output << " ";  // Print space if the condition is not met
            x++;
            return R();  // Recursive call for columns
        }
        x = 1;  // Reset column for the next row
        y++;    // Move to the next row

        output << ganti;  // Move to the next line

        return R();  // Recursive call for rows
    }
}
