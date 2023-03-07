#include<iostream>
using namespace std;
 
  
 
int main(){
 
  int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 14;

    cout<<binarySearch(arr, 0, 5, key)<<endl;
    
  
return 0;
}