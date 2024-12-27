#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;
    int matrix1[10][10], matrix2[10][10], result[10][10];

    cout << "Program to Add Two 2D Matrices" << endl;
    cout << "--------------------------------" << endl;

    // Input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input elements of the first matrix
    cout << "Enter elements of the first matrix: \n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of the second matrix: \n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Calculate and display the result of the matrix addition
    cout << "Result of matrix addition: \n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << result[i][j] << "\t";  // Print the result matrix with tab space between elements
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
