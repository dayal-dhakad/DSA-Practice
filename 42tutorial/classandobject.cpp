#include<iostream>

using namespace std;
 
class Hero{
    private:
    int health;

    public:
    char level;

    //to access private class we will make getters and setters

     // Getters

    int getHealth(){
        return health;
    }
    
    int getLevel(){
        return level;
    }

     //Setters
    void setHealth(int h){
        health = h;
    }
     
    
    void setLevel(char ch){
        level = ch;
    }

};


int main(){
 
  Hero ramesh ; // Static allocation
  cout<<"Size of Ramesh is : "<<sizeof(ramesh); //In output size should be 5 int+char but the output will be 8 because of padding and greddy align.
  ramesh.setHealth(70);
  cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
  cout<<"Level of Ramesh is "<< ramesh.level<<endl;  // we can directly access level because it is a public.

// We can also allocate objects dynamically

  Hero *kamlesh = new Hero;
  (*kamlesh).setHealth(40);
  cout<<"Kamlesh health is "<<(*kamlesh).getHealth()<<endl;
  // There is a alternative way of writing this
    cout<<"Kamlesh health is "<<kamlesh->getHealth()<<endl;






  
return 0;
}