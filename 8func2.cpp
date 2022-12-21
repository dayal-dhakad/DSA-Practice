#include <iostream>
using namespace std;

void checker(int a)
{
    if (a % 2 == 0)
    {
        cout << a << " is a even number";
    }

    else
    {
        cout << a << " is a odd number";
    }
}

int main()
{
    int a;
    cout << "Enter the number to check whether it is even or odd";
    cin >> a;

    checker(a);

    return 0;
}