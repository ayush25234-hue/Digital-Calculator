#include <iostream>
using namespace std;

int main() {
    int n;
    char op;

    cout << "Enter number of values: ";
    cin >> n;

    double num, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter numbers:\n";

    // Take first number as initial result
    cin >> result;

    for(int i = 1; i < n; i++) {
        cin >> num;

        switch(op) {
            case '+':
                result += num;
                break;

            case '-':
                result -= num;
                break;

            case '*':
                result *= num;
                break;

            case '/':
                if(num != 0)
                    result /= num;
                else {
                    cout << "Error! Division by zero.\n";
                    return 0;
                }
                break;

            default:
                cout << "Invalid operator!";
                return 0;
        }
    }

    cout << "Final Result = " << result;

    return 0;
}