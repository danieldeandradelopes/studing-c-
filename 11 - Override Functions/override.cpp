#include <iostream>

using namespace std;

void message(int n)
{
    cout << "Number: " << n << endl;
}

void message()
{
    cout << "Empty" << endl;
}

int main()
{
    message(10);
    message();

    return 0;
}