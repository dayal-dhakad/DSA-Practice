#include<iostream>
using namespace std;
 
 
int main(){
    /* 
 int arr[10]= {2, 8, 4, 4, 5, 6, 7, 8, 9, 10};

 cout<<"Address of first memory block is " << arr << endl;
  cout<<"Address of first memory block is " << &arr[0] << endl;
    cout<<"Address of first memory block is " << &arr[0] << endl;
  cout<<"element at first index is " << *arr << endl;
  cout<<"element at second index is " << *arr +1<< endl;
    cout<<"element at second index is " << *(arr +1)<< endl;

int i = 9;
cout<<"index out and name inside " << i[arr]<<endl;
*/

int temp[10]= {1, 2, 3,4 ,5};
cout<<sizeof(temp)<<endl;
int *ptr =&temp[0];

cout<<sizeof(ptr)<<endl;


int i = 8;
int *ii  = &i;
cout<<sizeof(i)<<endl;
cout<<sizeof(ii)<<endl;





  
return 0;
}