#include <iostream> // For input/output
using namespace std;

int main() {
    int num1, num2;

    // Prompt user for input
    cout << "Enter first integer: ";
    if (!(cin >> num1)) { // Input validation
        cerr << "Invalid input. Please enter an integer.\n";
        return 1;
    }

    cout << "Enter second integer: ";
    if (!(cin >> num2)) { // Input validation
        cerr << "Invalid input. Please enter an integer.\n";
        return 1;
    }

    // Calculate sum
    int sum = num1 + num2;

    // Display result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0; // Successful execution
}

