#include<iostream>
using namespace std;
 
 void update(int &n){   
    n++;
 }
int main(){
 
  int n = 5;
  cout<<"before update "<<n<< endl;
  update(n);
  cout<<"after update "<<n<< endl;

  
return 0;
}