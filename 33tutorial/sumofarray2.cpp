#include<iostream>
using namespace std;
 
int sumArray(int arr[], int size){ //can also be written as *arr
if (size==0)
{
    return 0;
}
if (size==1)
{
    return arr[0];
}

 int remainingPart = sumArray(arr+1, size-1);
 int sum = arr[0] + remainingPart;
 return sum;
}
 
int main(){
 int arr[4] = {2, 4, 4, 5};

int size = sizeof(arr)/ sizeof(arr[0]);

 int ans = sumArray(arr, size);

    cout<<"Sum of array is: "<<ans<<endl;

return 0;
}