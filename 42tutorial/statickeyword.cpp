#include <iostream>
using namespace std;

class Hero
{
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;     //use of static keyword

    static int random(){
     //   return this->health; --  this will throws error as there is no current object
     
    // return name; -- error

    
     return timeToComplete;
    }



};

int Hero:: timeToComplete = 5; //we have to initialize this outside class

int main()
{
    /*
   cout<<Hero::timeToComplete<<endl;    //we can access this datamember without creating object
    
    Hero h1;

    cout<<h1.timeToComplete<<endl;     // we can also do it by creating object but it is not preffered as it(static) belongs to class and not to objects. 
*/
     cout<< Hero::random()<<endl;

    return 0;   
}