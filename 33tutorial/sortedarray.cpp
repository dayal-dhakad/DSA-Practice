#include<iostream>
using namespace std;
 
bool isSorted(int arr[], int size){

    if(size == 0 || size == 1){ 
    return true;
}

 if(arr[0] > arr[1]){
    return false;

 }

 else{
    bool remainingPart = isSorted(arr + 1, size-1 );
    return remainingPart;
 }



}

 
int main(){
 
 int array[5] = {2, 4, 6, 7, 9};
 int size = 5;

 bool ans = isSorted(array, size) ; 
 cout<< ans;
  
return 0;
}