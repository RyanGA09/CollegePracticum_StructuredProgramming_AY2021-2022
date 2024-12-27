#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    char firstName[50], lastName[50]; // User's first and last name
    char repeatOrder; // To ask if the customer wants to order again
    string customerName[50]; // Array to store customer names
    string foodName[50]; // Array to store food names
    int menuCode, foodPrice, quantity, totalPrice[50], amountPaid, change, numOfCustomers, i = -1;

    cout << "===== Restaurant Cashier Payment Program =====\n";
    cout << "Number of Customers: "; cin >> numOfCustomers; cout << "\n";
    cin.ignore(); // To clear the input buffer

    do {
        i++;
        cout << "First Name: ";
        cin.getline(firstName, 50);
        cout << "Last Name: ";
        cin.getline(lastName, 50);

        // Combine first and last name
        strcat(firstName, lastName);
        customerName[i] = firstName;

        // Display customer's full name
        cout << "Customer's Full Name: " << customerName[i] << endl;
        cout << "\n";

        // Menu list
        cout << "Menu List:\n";
        cout << "1. Fried Rice         Rp. 12000\n";
        cout << "2. Fried Noodles      Rp. 12000\n";
        cout << "3. Cap Jay Fried      Rp. 14000\n";
        cout << "4. Noodle with Dumplings Rp. 13000\n";
        cout << "5. Chicken Soup       Rp. 12000\n";
        cout << "Enter your menu choice: "; cin >> menuCode;

        // Process the selected menu item
        switch (menuCode) {
            case 1:
                foodName[i] = "Fried Rice";
                foodPrice = 12000;
                break;
            case 2:
                foodName[i] = "Fried Noodles";
                foodPrice = 12000;
                break;
            case 3:
                foodName[i] = "Cap Jay Fried";
                foodPrice = 14000;
                break;
            case 4:
                foodName[i] = "Noodle with Dumplings";
                foodPrice = 13000;
                break;
            case 5:
                foodName[i] = "Chicken Soup";
                foodPrice = 12000;
                break;
            default:
                cout << "Invalid menu choice.\n";
                continue; // Skip the rest of the loop if the choice is invalid
        }

        // Display food name and ask for quantity
        cout << foodName[i] << endl;
        cout << "Enter quantity: "; cin >> quantity; cout << "\n";

        // Calculate total price
        totalPrice[i] = quantity * foodPrice;
        cout << "Total Price: Rp. " << totalPrice[i] << endl;

        // Ask for payment and calculate change
        cout << "Amount Paid: Rp. "; cin >> amountPaid; cout << "\n";
        change = amountPaid - totalPrice[i];
        cout << "Change: Rp. " << change << endl;

        // Ask if the customer wants to order more
        cout << "Do you want to order another menu item? (y/n): "; cin >> repeatOrder; cout << endl;

        cin.ignore(); // Clear input buffer before next loop iteration

    } while (repeatOrder != 'n'); // Repeat until the customer chooses not to order anymore

    cout << "THANK YOU FOR ORDERING\nPLEASE COME BACK AGAIN!\n";
    return 0;
}
