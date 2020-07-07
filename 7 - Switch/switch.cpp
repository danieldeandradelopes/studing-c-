#include <iostream>

using namespace std;

int main()
{
    // int num = 13;

    // switch (num)
    // {
    // case 9:
    //     cout << "Number 9" << endl;
    //     break;
    // case 10:
    //     cout << "Number 10" << endl;
    //     break;

    // case 11:
    //     cout << "Number 11" << endl;
    //     break;

    // default:
    //     cout << "Number isn't in interval" << endl;
    //     break;
    // }

    int num1, num2, result;
    char op;

    cout << "Enter with a first number: ";
    cin >> num1;

    cout << "Enter with a second number: ";
    cin >> num2;

    cout << "Selected: + - / * ";
    cin >> op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Sum: " + result;
        break;
    case '-':
        result = num1 - num2;
        cout << "Subtraction: " + result;
        break;
    case '/':
        result = num1 / num2;
        cout << "Division: " + result;
        break;
    case '*':
        result = num1 * num2;
        cout << "Multiplication: " + result;
        break;

    default:
        break;
    }
}