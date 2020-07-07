#include <iostream>

using namespace std;

int main()
{
    int num = 13;

    switch (num)
    {
    case 9:
        cout << "Number 9" << endl;
        break;
    case 10:
        cout << "Number 10" << endl;
        break;

    case 11:
        cout << "Number 11" << endl;
        break;

    default:
        cout << "Number isn't in interval" << endl;
        break;
    }
}