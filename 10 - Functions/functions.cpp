#include <iostream>

using namespace std;

bool validNumber(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void message()
{
    cout << "Enter a number: ";
}

int main()
{
    int num = 0;

    message();
    cin >> num;

    if (validNumber(num))
    {
        cout << "Thins number is par" << endl;
    }
    else
    {
        cout << "Thins number is odd" << endl;
    }

    return 0;
}