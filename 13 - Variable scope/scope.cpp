#include <iostream>

using namespace std;

int num_global = 12;

void foo()
{
    int num = 10;
    static int num_static = 1;

    cout << "Local variable: " << num << endl;
    cout << "Global variable: " << num_global << endl;

    num_static++;
    cout << "Static variavel: " << num_static << endl;
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}