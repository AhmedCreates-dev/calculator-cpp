#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    char choice;

    cout << "===== Simple C++ Calculator =====" << endl;

    do {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        switch(operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the calculator!" << endl;

    return 0;
}
