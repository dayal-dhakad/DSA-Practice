#include<iostream>
using namespace std;

int fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
 if (n==0)
 {
    return a;
 }
 else if (n==1 || n==2)
 {
    return a+b;
 }
 
 else{ 
    for (int i = 1; i <= n-2; i++)
    {
        c = a+b;
        a = b;
        b = c;

    }
    return c;
 }
}

int main(){
 
 int n;
cout<<"Enter the term";
cin>>n;

cout<< fibonacci(n);
  
return 0;
}