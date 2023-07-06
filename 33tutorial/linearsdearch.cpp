#include<iostream>
using namespace std;
 bool linearSearch(int arr[], int size, int key){

    if (size==0)
    {
        return false;
    }

    if (arr[0]==key)
    {
        return true;
    }
    else{
        linearSearch(arr+1, size-1, key);
    }
     
    


 }
 
int main(){
  int arr[5] = {2, 4, 6, 7, 9};
    int key = 9;
    int size = sizeof(arr)/sizeof(arr[0]);
  bool ans = linearSearch(arr, size, key);
  if(ans){
    cout<<key<<" found"<< endl;
  }
  else{
    cout<<key<<" not found"<<endl;
  }
  
return 0;
}