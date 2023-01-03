#include<iostream>
using namespace std;
 
 
int main(){
 int n= 5;
   int bit = n & 1;
  cout<<bit<<endl;
  n>>1;
   bit = n & 1;
  cout<<bit<<endl;
   n>>1;
   bit = n & 1;
  cout<<bit<<endl;
   n>>1;
   bit = n & 1;
  cout<<bit<<endl;
   n>>1;
   bit = n & 1;
  cout<<bit<<endl;
return 0;
}