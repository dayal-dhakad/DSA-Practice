#include<iostream>
using namespace std;


int arithmeticProgression(int n){

   int answer = (3*n) + 7;

   return answer;
}

int main(){
 
 int n;
 cout<<"Enter the value of n ";
 cin>>n;

 cout<< arithmeticProgression(n);

 
  
  
return 0;
}