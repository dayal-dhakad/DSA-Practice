#include<iostream>
using namespace std;
 
 void reverse(int i){
    if(i==0){
        return;
    }

    cout<<i%10;
    reverse(i/10);
 }
 
int main(){

    int i = 12345;
    reverse(i);
 
  
  
return 0;
}