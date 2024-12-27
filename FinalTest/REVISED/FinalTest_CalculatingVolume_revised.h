// FinalTest_CalculatingVolume_revised.h

#define in cin
#define next endl
#define out cout

#include <iostream>
#include <math.h>
using namespace std;

// Variable declarations
int input, numRectangles, numCubes;
float length, width, height, side;
float volumeRectangle, volumeCube, totalVolume;
char word[30], repeat;

void calculateVolume()
{
    out << "Calculating Volume\n";
    out << "Menu : \n";
    out << "1. Calculate Rectangular Prism Volume\n";
    out << "2. View Rectangular Prism Volume Results\n";
    out << "3. Calculate Cube Volume\n";
    out << "4. View Cube Volume Results\n";
    out << "5. Sum Volumes\n";
    out << "Enter a word: "; cin.getline(word, 30);
    out << "PROGRAM STARTED\n";

    do {
        out << "Enter your choice: "; in >> input;
        switch (input) {
            case 1:
                // Calculate volume for multiple rectangular prisms
                out << "Enter the number of rectangular volumes to calculate: ";
                in >> numRectangles;

                for (int i = 1; i <= numRectangles; i++) {
                    out << "Volume of Rectangular Prism " << i << next;
                    out << "Length = "; in >> length;
                    out << "Width  = "; in >> width;
                    out << "Height = "; in >> height;
                    volumeRectangle = length * width * height;
                    out << "Volume = " << volumeRectangle << next;
                }
                break;

            case 2:
                // Display rectangular volumes
                out << "Displaying Volume Results\n";

                for (int i = 1; i <= numRectangles; i++) {
                    out << "Volume of Rectangular Prism " << i << " = " << volumeRectangle << next;
                }
                break;

            case 3:
                // Calculate volume for multiple cubes
                out << "Enter the number of cube volumes to calculate: ";
                in >> numCubes;

                for (int j = 1; j <= numCubes; j++) {
                    out << "Volume of Cube " << j << next;
                    out << "Enter side length = "; in >> side;
                    volumeCube = pow(side, 3);
                    out << "Volume = " << volumeCube << next;
                }
                break;

            case 4:
                // Display cube volumes
                out << "Displaying Volume Results\n";

                for (int j = 1; j <= numCubes; j++) {
                    out << "Volume = " << volumeCube << next;
                }
                break;

            case 5:
                // Sum volumes
                out << "Summing Volumes\n";
                out << "Displaying Volume Results\n";
                for (int i = 1; i <= numRectangles; i++) {
                    out << "Volume = " << volumeRectangle << next;
                }

                out << "Displaying Volume Results\n";
                for (int j = 1; j <= numCubes; j++) {
                    out << "Volume = " << volumeCube << next;
                }

                out << "Select Rectangular Prism volume number: "; in >> numRectangles;
                out << "Select Cube volume number: "; in >> numCubes;

                totalVolume = numRectangles + numCubes;
                out << "Total Volume = " << totalVolume << next;
                break;

            default:
                out << "Menu Not Available\n";    
        }

        out << "Do you want to continue (y/n)? "; in >> repeat;
    } 
	while (repeat != 'n');

    cin.ignore();
}
