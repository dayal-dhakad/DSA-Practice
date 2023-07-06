#include<iostream>
using namespace std;
 
int sumArray(int arr[], int size){ //can also be written as *arr
if (size<=0)
{
    return 0;
}

  return (arr[size-1]) + sumArray(arr,size-1) ;
 
}
 
int main(){
 int arr[3] = {2, 4, 5};

int size = sizeof(arr)/ sizeof(arr[0]);

 int ans = sumArray(arr, size);

    cout<<"Sum of array is: "<<ans<<endl;

return 0;
}