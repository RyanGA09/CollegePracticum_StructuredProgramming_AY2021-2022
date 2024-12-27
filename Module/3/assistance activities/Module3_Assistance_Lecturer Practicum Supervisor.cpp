#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "===== Reversed Sentence with Old Spelling =====\n\n";
	
	// Variable declaration to store the input sentence
    char originalText[50], reversedText[50];

    // Sentence input
    cout << "Enter a sentence: ";
    cin.getline(originalText, 100);

    // Copy sentence to reversedText
    strcpy(reversedText, originalText);

    // Reverse the sentence
    strrev(originalText);

    // Display the reversed sentence
    cout << "Reversed sentence: " << originalText << endl;

    // Displaying old spelling (old language)
    cout << "Old spelling: ";
    for (int i = 0; i < strlen(reversedText); i++) 
	{
        if (reversedText[i] == 'U') 
		{
            cout << "OE";
        } 
		else if (reversedText[i] == 'J') 
		{
            cout << "DJ";
        } 
		else if (reversedText[i] == 'Y') 
		{
            cout << "J";
        } 
		else if (reversedText[i] == 'C') 
		{
            cout << "TJ";
        } 
		else 
		{
            cout << reversedText[i];
        }
    }

    return 0;
}
