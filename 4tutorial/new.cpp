#include<iostream>
using namespace std;
 
 
int main(){
 
 int n= 5;
 for (int i = 1; i <=n; i++)
 {
    for (int j = n-i+1; j>=1; j--)
    {
        cout<<"* ";
    }
    
     for (int k = 1; k <= i-1 ; k++)
    {
        cout<<"  ";
    }
   
    
     for (int k = 1; k <= i-1 ; k++)
    {
        cout<<"  ";
    }

    
    for (int l = n-i+1; l >=1; l--)
    {
       cout<<"* ";
    }
    
  if (i<n)
  {
   cout<<endl;
  }
  
    
 }
 {
    cout<<endl;
 }
 
 for (int i = 1; i <=n; i++)
 {
    for (int j = 1; j<=i; j++)
    {
         cout<<"* ";
    }

    for (int k = n-i; k>=1; k--)
    {
        cout<<"  ";
    }
    
    for (int k = n-i; k>=1; k--)
    {
       cout<<"  ";
    }

    for (int z = 1; z <=i; z++)
    {
        cout<<"* ";
    }
    





    cout<<endl;
 }
 
 
  
  
return 0;
}