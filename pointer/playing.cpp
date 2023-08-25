#include<iostream>
using namespace std;
 
 
int main(){
 int i= 5;
 int j = 14;
 int* ptr = &i;

 cout<<i<<endl;
cout<<ptr<<endl;

  cout<<*ptr<<endl<<endl;


 
 i++;

  cout<<i<<endl;
  cout<<ptr<<endl;
  cout<<*ptr<<endl<<endl;

   i++;
   (*ptr)++;
  cout<<i<<endl;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;

 
  
return 0;
}