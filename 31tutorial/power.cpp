#include<iostream>
using namespace std;
 

 int power(int n){
    if(n==0)
    return 1;

    return 2 * power(n-1);
 }
 
int main(){
 
 int number;

 cin>>number;

 cout<< power(number);
  
  
return 0;
}