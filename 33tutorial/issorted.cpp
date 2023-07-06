#include<iostream>
using namespace std;
 
bool isSorted(int arr[], int size){ //can also be written as *arr

    if (size==0||size==1)
    {
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }

    
    
}
 
int main(){
 int arr[10] = {2, 4, 5, 6, 8, 9 , 10, 11, 45, 70};

int size = sizeof(arr)/ sizeof(arr[0]);

 bool ans = isSorted(arr, size);
  if(ans){
    cout<<"Array is sorted"<<endl;
  }

  else{
    cout<<"Array is not sorted"<<endl;
  }
  
return 0;
}