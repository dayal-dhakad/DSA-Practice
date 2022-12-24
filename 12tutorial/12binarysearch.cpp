#include<iostream>
using namespace std;
 
 int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
   
    //int mid = (start+end)/2;
    int mid = start + (end-start)/2;

    while(start<=end){
        if (arr[mid]==key)
        {
            return mid;
        }

        if (key> arr[mid])
        {
            start= mid+1;
        }
        
         if (key < arr[mid])
        {
            end= mid-1;
        }
       // mid = (start+end)/2;
        mid = start + (end-start)/2;
    }


        return -1;
 }
 
int main(){
 
  int arr[6] = {2 , 5, 6, 8, 14, 15};
  int brr[7] = {2 , 5, 6, 8, 14, 15, 17};
  int key;
  cout<<"Enter the element you want to search in this array"<<endl;
  cin>>key;
  int index= binarySearch(arr, 6, key);
  if (index==-1)
  {
    cout<<"Entered element is not present in this array";
  }
  else{ 
  cout<< "Index of "<<key<< " is "<<index<<endl;
  }
return 0;
}