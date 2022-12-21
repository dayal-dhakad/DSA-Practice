#include<iostream>
using namespace std;
int main(){
   
   // AAA
   // BBB
   // CCC

   int n;
   cin>> n;
   
   int i= 1;
   
   while (i<=n)
   {
    char ch = 'A';
    int j= n-i+1;
    while (j<=n)
    {
        cout<<ch;
        
        j++;
        ch++;
    }
     



    cout<<endl;
    i++;
   }
   
  
  
return 0;
}