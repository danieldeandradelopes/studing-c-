#include <iostream>

using namespace std;

int main()
{
    // int i = 0;
    // int j = 0;

    // for (i = 0, j = 0; i <= 10; i++, j++)
    // {
    //     cout << i << endl;
    //     cout << j << endl;
    // }

    int num = 0;
    int fat = 1;

    cout << "Enter with a number: ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        fat = fat * i;
    }

    cout << "Fat is: " << fat << endl;

    return 0;
}
