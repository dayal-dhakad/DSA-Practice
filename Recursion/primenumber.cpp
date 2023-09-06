#include <iostream>
#include <cmath>
using namespace std;
 
 bool isprime(int num, int i=2){

    if(num<=2){
        return false;
    }
    if(i > sqrt(num)){
        return false;
    }

    if(num%i == 0){
        return true;
    }
    else{
        isprime(num, i+1);
    }

 }
 
int main(){
 int num = 4;

 if(!isprime(num)){
    cout<<num<<" is a prime number"<<endl;
 }
  
  else{
    cout<<"Not prime"<<endl;
  }
  
return 0;
}