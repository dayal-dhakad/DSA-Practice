#include<iostream>
using namespace std;
 
 
int main(){
 int i = 1;
 int n = 5;

    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "* ";
            space--;
        }
 }
  
return 0;
}