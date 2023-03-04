#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout << "value of ptr is " << ptr << endl;
    cout << "value of *ptr is " << *ptr << endl;
    cout << "value of ptr2 is " << ptr2 << endl;
    cout << "value of *ptr2 is " << *ptr2 << endl;
    cout << "value of **ptr2 is " << **ptr2 << endl;
    return 0;
}