#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    for(int i=j;i<n;i++){
        if(arr[i]==1){
            swap(arr[j],arr[i]);
            j++;
        }
    }
}