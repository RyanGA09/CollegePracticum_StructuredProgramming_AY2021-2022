#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char inputText[50], copiedText[50];

    cout << "Program to Reverse a Sentence and Convert to Old Spelling" << endl;
    cout << "----------------------------------------------------------" << endl;

    // Input the sentence
    cout << "Enter a sentence: ";
    cin.getline(inputText, 100);

    // Copy inputText to copiedText
    strcpy(copiedText, inputText);

    // Reverse the input text
    strrev(inputText);

    // Display the reversed sentence
    cout << "Reversed sentence: " << inputText << endl;

    // Display the old spelling (ejaan lama)
    cout << "Old spelling: ";
    for (int i = 0; i < strlen(copiedText); i++)
    {
        // Convert specific letters to old spellings
        if (copiedText[i] == 'U') {
            cout << "OE";
        } else if (copiedText[i] == 'J') {
            cout << "DJ";
        } else if (copiedText[i] == 'Y') {
            cout << "J";
        } else if (copiedText[i] == 'C') {
            cout << "TJ";
        } else {
            cout << copiedText[i];  // Print the character as is
        }
    }

    return 0;
}