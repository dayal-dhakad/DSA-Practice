#include<iostream>
using namespace std;

void swapArray(int arr[], int n){
  
  
   
   int start1= 0;
   int start2 = 1;

   
   
   while(start1<=n){
    swap(arr[start1], arr[start2]);
   start1 = start1+2;
    start2 = start2+2;
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
 
  int arr[9]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
  cout<<"Initial Array is ";

  for (int i = 0; i < 9; i++)
 {
    cout<<arr[i]<<" ";
 }

cout<<endl;


  swapArray(arr, 9);
  cout<<"After reversed   ";
   printArray(arr, 9);



  
return 0;
}