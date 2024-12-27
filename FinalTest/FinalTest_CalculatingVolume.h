// FinalTest_CalculatingVolume.h

#define in cin
#define next endl

#include <iostream>
#include <math.h>
using namespace std;

// Variable declarations
int repeat, input, numRectangles, numCubes;
float length, width, height, side;
float volumeRectangle, volumeCube, totalVolume;

// Function to calculate and display volumes
void calculateVolume()
{
    cout << "PROGRAM STARTED\n";
    do 
	{
        cout << "Enter your choice: "; in >> input;
        switch (input) 
		{
            case 1:
                // Calculate volume for multiple rectangular prisms
                cout << "Enter the number of rectangular volumes to calculate: ";
                in >> numRectangles;

                for (int i = 1; i <= numRectangles; i++) 
				{
                    cout << "Volume of Rectangular Prism " << i << next;
                    cout << "Length = "; in >> length;
                    cout << "Width  = "; in >> width;
                    cout << "Height = "; in >> height;
                    volumeRectangle = length * width * height;
                    cout << "Volume = " << volumeRectangle << next;
                }
                break;

            case 2:
                // Display volumes of rectangles
                cout << "Displaying Volume Results\n";
                for (int i = 1; i <= numRectangles; i++) 
				{
                    cout << "Volume = " << volumeRectangle << next;
                }
                break;

            case 3:
                // Calculate volume for multiple cubes
                cout << "Enter the number of cube volumes to calculate: ";
                in >> numCubes;

                for (int j = 1; j <= numCubes; j++) 
				{
                    cout << "Volume of Cube " << j << next;
                    cout << "Enter Side length = "; in >> side;
                    volumeCube = pow(side, 3);
                    cout << "Volume = " << volumeCube << next;
                }
                break;

            case 4:
                // Display volumes of cubes
                cout << "Displaying Volume Results\n";
                for (int j = 1; j <= numCubes; j++) 
				{
                    cout << "Volume = " << volumeCube << next;
                }
                break;

            case 5:
                // Calculate total volume
                cout << "Volume Summation\n";
                cout << "Displaying Volume Results\n";
                for (int i = 1; i <= numRectangles; i++) 
				{
                    cout << "Volume = " << volumeRectangle << next;
                }

                cout << "Displaying Volume Results\n";
                for (int j = 1; j <= numCubes; j++) 
				{
                    cout << "Volume = " << volumeCube << next;
                }

                cout << "Select Rectangular Volume number: "; in >> numRectangles;
                cout << "Select Cube Volume number: "; in >> numCubes;

                totalVolume = numRectangles + numCubes;
                cout << "Total Volume = " << totalVolume << next;
                break;

            default:
                cout << "Menu Not Available\n";
        }

        cout << "Do you want to continue (y/n)? "; in >> repeat;
    } 
	while (repeat != 'n');

    return calculateVolume();
}
