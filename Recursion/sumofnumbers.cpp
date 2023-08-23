#include<iostream>
using namespace std;
 
 int sum(int n){
    int ans= 0;
    if(n==1){
        return 1;
    }
    cout<<"N: "<<n<<"  answer: "<<ans<<endl;
    ans = n + sum(n-1);
    cout<<"ANSWER: "<<ans<<endl;
    return ans;
 }
 

int main(){
 
 int n;
 cout<<"Enter the number"<<endl;
 cin>>n;

 cout<<"Sum of n natural number is :"<<sum(n);

  
  
return 0;
}