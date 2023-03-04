#include<iostream>
using namespace std;
 
 
int main(){
 int arr[10]= {2, 8, 4, 4, 5, 6, 7, 8, 9, 10};

 cout<<"Address of first memory block is " << arr << endl;
  cout<<"Address of first memory block is " << &arr[0] << endl;
    cout<<"Address of first memory block is " << &arr[0] << endl;
  cout<<"element at first index is " << *arr << endl;
  cout<<"element at second index is " << *arr +1<< endl;
    cout<<"element at second index is " << *(arr +1)<< endl;



  
return 0;
}