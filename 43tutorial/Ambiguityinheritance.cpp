#include<iostream>
using namespace std;
 
class A{

    public:
    void func(){
        cout<<"I am A"<<endl;
    }
};
 
class B{

    public:
    void func(){
        cout<<"I am B"<<endl;
    }
};

class C : public A, public B{

};

int main(){

    C c1;
 //   c1.func();  --- //ambiguous

    c1.A :: func();
 
  
  
return 0;
}