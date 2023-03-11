#include<iostream>
using namespace std;
 
class A{
    public:
    void sayHello(){
        cout<<"My name is Dayal"<<endl;
    }

    void sayHello(string name){
        cout<<"My name is : "<<name<<endl;
    }
};
 
int main(){
 
  A obj;
  obj.sayHello();

 // string name = 
  obj.sayHello("Dhakad");
  
return 0;
}