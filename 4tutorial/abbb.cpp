#include<iostream>
using namespace std;
 
 
int main(){
 
 int n;
 cin>>n;

 
  for (int i = 1; i <=n; i++)
  {
    char ch = 65;
    char cd = 65+n-1-i+1;
    for (int j= 1; j <= n-i+1; j++)
    {
        cout<<ch<<" ";
        ch++;
    }
    
    for (int k = 1; k <= i-1; k++)
    {
        cout<<"* * ";
    }

   

    


     
     for (int l = 1; l <= n-i+1; l++)
     {
        
        cout<<cd<<" ";
        cd--;
     }
     
 
    
   cout<<endl;
  }
  
  
return 0;
}