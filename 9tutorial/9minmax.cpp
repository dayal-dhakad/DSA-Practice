#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int getMax(int num[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }  
        return max;
    
}

int getMin(int num[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }  
        return min;
    
}

int main()
{

    int num[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin >> size;
cout<<"Enter the elements of array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        cout<<endl;
    }

    cout <<"Maximum No. in this array is "<< getMax(num, size)<<endl;

    cout <<"Minimum No. in this array is "<< getMin(num, size);

    
    return 0;
}