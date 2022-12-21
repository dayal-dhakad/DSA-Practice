#include <iostream>
using namespace std;

void noOfBits(int a, int b)
{
    int count = 0;
    while (a != 0)
    {
        if (a & 1 == 1)
        {
            count++;
        }
        a = a >> 1;
    }
   
   
    int countb = 0;
    
    while (b != 0)
    {
        if (b & 1 == 1)
        {
            countb++;
        }
        b = b >> 1;
    }
    cout << count + countb;
}

int main()
{
    int a, b ;
    cout<<"Enter the no. a and b ";
    cin >> a>>b;

    noOfBits(a, b);

    return 0;
}