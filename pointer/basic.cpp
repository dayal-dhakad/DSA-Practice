#include<iostream>
using namespace std;
 
 
int main(){
 
  int num = 1;
  int *ptr = &num;
  int **ptrr = &ptr;

  cout<<"Num: "<<num<<endl;
  cout<<"&Num: "<<&num<<endl;
//  cout<<"Ptr: "<<ptr<<endl;
  // cout<<"*Ptr: "<<*ptr<<endl;
    cout<<"Ptrr: "<<ptrr<<endl;
//    cout<<"&Ptr: "<<&ptr<<endl;
//    cout<<"**ptrr: "<<**ptrr<<endl;
  
  
return 0;
}