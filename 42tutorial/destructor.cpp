#include <iostream>
#include<cstring>
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
        char *ch = new char[strlen(temp.name) + 1];
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
        cout << endl;
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
    
    //destructor
    ~Employee(){
            cout<<"Destructor called"<<endl;
    }
   
};

int main()
{
     
    //static
    Employee emp1;

    // dynamic
    Employee *emp2 = new Employee();
    return 0;
}