#include <iostream>
using namespace std;

int main() 
{
    cout << "Program to Create a Pattern (Numbers, Stars, and Plus)" << endl;
    cout << "--------------------------------------------------------" << endl;

    do 
    {
        int rows;  // Number of rows
        int tempRows;

        // User input for the number of rows
        cout << "Enter the number of rows: ";
        cin >> rows;

        tempRows = rows;

        // Loop through each row
        for (int i = 1; i <= rows; i++) 
        {
            cout << i << " ";  // Print the row number
            // Loop through each column
            for (int k = 2; k <= rows; k++) 
            {
                // Conditions for the last row or last column
                if (k == rows || i == rows) 
                {
                    if (i == 1) 
                    {
                        cout << k << " ";  // Print column number in the first row
                    } 
                    else 
                    {
                        cout << "+ ";  // Print plus sign in other rows
                    }
                }
                // Handle inner rows (not first or last) and inner columns
                else if (i != 1 && i != rows && k != rows) 
                {
                    if (tempRows - 1 == k) 
                    {
                        cout << "+ ";  // Print plus when the condition meets
                        tempRows--;  // Decrease tempRows
                    } 
                    else 
                    {
                        cout << "* ";  // Print star for other positions
                    }
                } 
                else 
                {
                    cout << k << " ";  // Default print column number
                }
            }
            cout << endl;  // Move to the next line after each row
        }

    } 
    while (true);  // Infinite loop, can be modified to exit on a condition if needed

    return 0;
}
