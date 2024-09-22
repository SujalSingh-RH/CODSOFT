#include <iostream>
#include <string> 

using namespace std;

int main() {
    double number1;
    double number2;
    string SIGN; // Declare SIGN as a string

    cout << "ENTER YOUR 1ST NUMBER: ";
    cin >> number1;
    
    cout << "ENTER YOUR OPERATOR: ";
    cin >> SIGN;
    
    cout << "ENTER YOUR 2ND NUMBER: ";
    cin >> number2;
    
    // Operator input for two given numbers
    if(SIGN == "+") {
        cout << "Result: " << number1 + number2 << endl;
    } else if (SIGN == "-") {
        cout << "Result: " << number1 - number2 << endl;
    } else if (SIGN == "*") {
        cout << "Result: " << number1 * number2 << endl;
    } else if (SIGN == "/") {
        if (number2 != 0) {
            cout << "Result: " << number1 / number2 << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}
