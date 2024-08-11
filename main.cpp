#include <iostream>
#include <iomanip>  // For std::setprecision

using namespace std;

void showMenu() {
    cout << "Simple Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
    cout << "Enter your choice (1-5): ";
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> choice;

        // Check for exit condition
        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        // Validate choice
        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            continue;
        }

        // Get numbers from user
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1: // Addition
                cout << "Result: " << fixed << setprecision(2) << num1 + num2 << endl;
                break;
            case 2: // Subtraction
                cout << "Result: " << fixed << setprecision(2) << num1 - num2 << endl;
                break;
            case 3: // Multiplication
                cout << "Result: " << fixed << setprecision(2) << num1 * num2 << endl;
                break;
            case 4: // Division
                if (num2 != 0) {
                    cout << "Result: " << fixed << setprecision(2) << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Unexpected error." << endl;
                break;
        }
    }

    return 0;
}
