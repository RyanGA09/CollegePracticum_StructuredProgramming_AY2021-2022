#include <iostream>
using namespace std;

int main()
{
    int numStudents; 
    const int prize = 10500000;
    float prizeAfterTax;
    float sharePerStudent;

    printf("Prize Distribution After Tax for Each Student\n");
    printf("--------------------------------------------\n");

    // Asking the user to input the number of students
    printf("Enter the number of students = ");
    scanf("%i", &numStudents);

    // Calculate the prize after 20% tax
    prizeAfterTax = prize - (prize * 20 / 100);

    // Calculate each student's share
    sharePerStudent = prizeAfterTax / numStudents;

    // Display the result
    printf("Each student's share = Rp.%.2f", sharePerStudent);

    return 0;
}
