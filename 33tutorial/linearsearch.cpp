#include <iostream>
using namespace std;

void print(int arr[], int size, int key)
{

    cout << "Size is " << size << ", key = " << key << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int key)
{

    print(arr, size, key);
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }

    else
    {
        int remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{

    int arr[5] = {2, 8, 4, 10, 9};
    int size = 5;
    int key = 0;

    int ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Element Present";
    }
    else
    {
        cout << "Element Absent";
    }

    return 0;
}