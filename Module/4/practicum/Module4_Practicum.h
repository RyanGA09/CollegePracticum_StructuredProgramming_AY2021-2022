// Module4_Practicum.h
#define output cout
#define masukkan cin
#define jika if
#define lain else
#define ganti endl

#include <iostream>

using namespace std;

// Variables for the program
int n, baris = 0, kolom;

// Function to generate the pattern
void sgt(int n)
{
    jika (baris <= n) {
        jika (kolom > baris) {
            // Check conditions for specific symbols
            jika (kolom == n - 0 || baris == n) {
                output << "+ ";  // Print '+' symbol
            }
            lain jika (kolom == n - 3 || baris == n) {
                output << " + ";  // Print ' + ' symbol
            }
            lain jika (kolom == n - 2 || baris == n) {
                output << " # ";  // Print '# ' symbol
            }
            lain jika (kolom == n - 5 || baris == n) {
                output << " # ";  // Print '# ' symbol
            }
            lain {
                output << " @ ";  // Print '@' symbol
            }
            kolom--;  // Move to the previous column
            return sgt(n);  // Recursive call to fill the row
        }
        kolom = n;  // Reset the column
        baris++;  // Move to the next row
        output << ganti;  // Move to the next line
        return sgt(n);  // Recursive call for the next row
    }
}
