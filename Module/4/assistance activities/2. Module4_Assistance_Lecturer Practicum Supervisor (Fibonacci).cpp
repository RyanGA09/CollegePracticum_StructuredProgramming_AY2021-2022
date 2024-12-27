#include <iostream>
using namespace std;

// Global variables
int a = 0, b = 1, c = 1, n;

void fibonacciSequence(int n)
{
    // Base condition to stop the recursion
    if (c <= n) 
	{
        // If 'c' is odd, sum a and b
        if (c % 2 == 1) 
		{
            a = a + b;
            cout << a << " ";
        }
        // If 'c' is even, sum b and a
        else 
		{
            b = b + a;
            cout << b << " ";
        }
        c++;

        // Recursion continues
        return fibonacciSequence(n);
    }
}

int main()
{
    cout << "==============================" << endl;
    cout << "   Fibonacci Sequence Output  " << endl;
    cout << "==============================\n" << endl;

    // Input for the limit of the Fibonacci sequence
    cout << "Input Sequence Limit: "; 
    cin >> n;
    
    // Displaying the first two Fibonacci numbers
    cout << " " << a << " " << b << " ";
    n = (n - 2);  // Adjust for the first two numbers already displayed
    
    // Call the function to calculate and display the Fibonacci sequence
    fibonacciSequence(n);
    
    return 0;
}
