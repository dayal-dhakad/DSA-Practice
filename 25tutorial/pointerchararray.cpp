#include<iostream>
using namespace std;
 
 
int main(){
 char ch[6] = "abcde";
 char *c = &ch[0];

 cout<<ch<<endl;
 cout<<c<<endl;
 cout<<*c<<endl;
 cout<< char(*c+1)<<endl;
  
  
return 0;
}