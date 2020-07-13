#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;

    cout << "Digite o segundo numero: " << endl;
    cin >> num2;

    cout << "O resultado eh: " << sum(num1, num2) << endl;

    return 0;
}