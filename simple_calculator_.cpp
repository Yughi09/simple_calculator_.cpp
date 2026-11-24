#include <iostream>
using namespace std;

int main() {
    int a, b;
    char operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    if (operation == '+')
        cout << "Answer: " << a + b;
    else if (operation == '-')
        cout << "Answer: " << a - b;
    else if (operation == '*')
        cout << "Answer: " << a * b;
    else if (operation == '/')
        cout << "Answer: " << a / b;
    else
        cout << "Invalid operation";

    return 0;
}
