#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
    int health;

public:
    char *name;
    char level;

    Employee()
    {
        cout << "Constructor called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Employee(int health)
    {
        this->health = health;
    }

    Employee(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
     Employee(Employee &temp)
    {
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    } 

    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
        cout<<endl;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }

    // Setters
    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
  Employee emp1;
  emp1.setHealth(12);
  emp1.setLevel('D');
  
  char name[6] = "Dayal";

  emp1.setName(name);

  emp1.print();

    Employee emp2(emp1);   //OR Employee emp2 = emp1;
 
    emp2.print();

    emp2.name[0] = 'P';

    emp2.print();

      emp1.print();    // Name of emp one is also changed. This is shallow copy. When we copy object is address is too passed and when we edit the copied object, original is also changed.





//use default copy contructor for this u have to remove that initialized copy constructor

 /*
    Employee temp(30, 'Z');

    Employee suresh(temp);

    temp.print();
    suresh.print();

    Employee dayal(10);
    Employee *dipendra = new Employee;
    //   Employee *dipendra = new Employee();  same thing as above

    cout << "Health of dayal is " << dayal.getHealth() << endl;

    Employee temp(30, 'Z');

    cout << "Health of temp is " << temp.getHealth() << endl;
    cout << "level of temp is " << temp.level << endl;
    */

        return 0;
}