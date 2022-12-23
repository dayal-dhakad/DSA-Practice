#include<iostream>
using namespace std;
 
 int sumOfArray(int arr[], int size){

    int sum= 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
 }
int main(){
 int size;
 cout<<"Enter the size of array"<<endl;
 cin>> size;
 cout<<"Enter the elements of array"<<endl;
 int arr[100];

 for (int i = 0; i < size; i++)
 {
    cin>>arr[i];
 }

 cout<<"Array"<<endl;

 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }
 cout<<endl;
 cout<<"Sum of all elements of array is "<< sumOfArray(arr, size);
  
  
return 0;
}