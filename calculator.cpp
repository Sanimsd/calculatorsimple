#include <iostream>

using namespace std;

int main()
 {
    char operation;
    float number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << "Result: " << number1 + number2 << endl;
            break;
        case '-':
            cout << "Result: " << number1 - number2 << endl;
            break;
        case '*':
            cout << "Result: " << number1 * number2 << endl;
            break;
        case '/':
            if(number2 != 0)
                cout << "Result: " << number1 / number2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! Invalid operation." << endl;
    }

    return 0;
}

