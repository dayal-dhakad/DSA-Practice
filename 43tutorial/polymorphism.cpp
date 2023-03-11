#include<iostream>
using namespace std;
 //Compile time polymorphism
 // Function overloading
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

  
  obj.sayHello("Dhakad");
  
return 0;
}