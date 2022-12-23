#include<iostream>
using namespace std;
 
void reverseArray(int arr[], int n){
int start = 0;
int end = n-1;

while(start <= end)

{
   swap(arr[start], arr[end]);
   start++;
   end--;
    
}
}


void printArray(int arr[], int n){ 
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }

cout<<endl;
}

 
int main(){
 
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int brr[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
  reverseArray(arr, 10);
  reverseArray(brr, 9);
  printArray(arr, 10);
  printArray(brr, 9);
return 0;
}