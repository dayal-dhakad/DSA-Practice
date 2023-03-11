#include<iostream>
using namespace std;

class Animal{
public:
int age;
int weight;

public:
void bark(){
    cout<<"Barking"<<endl;
}

};

class Human{

    public:
    string color;

    public:
    void speak(){
    cout<<"Speaking"<<endl;
}
    
};

//multiple inheritance

class Hybrid : public Animal, public Human{

};
 
int main(){
//  Dog d ;
//  d.speak();
//  cout<<d.age<<endl;
  
  Hybrid obj1;
  obj1.speak();
  obj1.bark();
  
return 0;
}