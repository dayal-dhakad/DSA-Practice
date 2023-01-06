#include<iostream>
using namespace std;
 
 
int main(){
 int n=5;
 char ch = 65;
 char cf = 65+1;
 for (int i = 1; i <=n ; i++)
 {
       for (int k = 1; k<=n-i; k++)
       {
            cout<<" ";
       }

       for (int l = i; l<=i; l++)
       {
        
         cout<<ch<<" ";
       }
       
       for (int s = 1; s <=i-1; s++)
       {
          cout<<" ";
       }
       
       for (int s = 1; s <=i-2; s++)
       {
          cout<<" ";
       }
       
      
     

   ch++;
   cf++;
   
    cout<<endl;

 }
 
  
  
return 0;
}