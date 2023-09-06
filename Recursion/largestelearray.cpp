#include<iostream>
#include<bits/stdc++.h>


using namespace std;
 
 int largest(int arr[], int size){
    if(size==1){
        return arr[0];
    }

    return max(largest(arr, size-1), arr[size-1]);
    
 }
 
int main(){
 
  int arr[6] = {1, 3, 67, 2, 9, 4};
  
  cout<<largest(arr, 6);

return 0;
}