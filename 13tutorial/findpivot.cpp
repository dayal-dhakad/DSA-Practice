#include <iostream>
using namespace std;

int pivotElement(int arr[], int n)
{

    int sumleft;
    int sumright;
    int answer= 0;
    //{1,2,3,7,6};
    for (int i = 0; i < n; i++)
    {   
        sumright = 0;
        sumleft = 0;
        for (int j = 0; j < i; j++)
        {
            sumleft = arr[j] + sumleft;
        }

        for (int k = i + 1; k < n; k++)
        {
            sumright = arr[k] + sumright;  
        }
      //   cout<<sumleft<<" ";
      //   cout<<sumright<<" ";
      //   cout<<endl;
        if (sumleft == sumright)
        {
            answer = arr[i];
        }
    }

    return answer;
}
int main()
{

    int arr[5] = {1, 2, 3, 7, 6};

    cout<< pivotElement(arr, 5);
}