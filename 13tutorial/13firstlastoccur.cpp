#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {

            ans = mid;
            e = mid - 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {

            ans = mid;
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }

    return ans;
}

int main()
{

    int arr[7] = {0, 1, 1, 3, 5, 5, 5};
    cout <<"First occurence of 5 is index "<< firstOccurence(arr, 7, 5)<<endl;
    cout <<"Last occurence of 5 is index "<< lastOccurence(arr, 7, 5);
}