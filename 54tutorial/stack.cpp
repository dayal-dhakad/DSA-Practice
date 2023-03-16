#include<iostream>
#include<stack>
using namespace std;
 
 
int main(){
 
 stack <int> s;      //creation of stack

 s.push(2);          //push operation
 s.push(3);

 s.pop();           //pop operation
 cout<<"Printing top element "<<s.top()<<endl;

 if(s.empty()){
    cout<<"Stack is empty"<<endl;
 }
else{
    cout<<"Stack is not empty"<<endl;
}
  cout<<"Size of Stack is "<<s.size()<<endl;
  
  
return 0;
}