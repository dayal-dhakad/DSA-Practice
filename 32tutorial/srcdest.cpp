#include<iostream>
using namespace std;
 
void reachHome(int src, int dest){

    cout<<src<<" "<<dest<<endl;

    if (src==dest)
    {
        cout<<"Reached"<<endl;
        return;
    }
 
   //src++;
    reachHome(src+1, dest);
}

 
int main(){
 int src = 1;
 int dest = 10;

 cout<<endl;

 reachHome(src, dest);
  
  
return 0;
}