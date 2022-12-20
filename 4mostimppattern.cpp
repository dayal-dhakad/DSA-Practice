#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int n = 5;
    int i = 1;
   
    while (i <= n)
    {
    
      int j=1; 
      while (j<=n-i+1)
      {
        cout<<j<<" ";
        j++;   
      }

      int k = i-1;
      while (k)
      {
        cout<<"* *"<<" ";
        k--;
        
      }
      
      int d = n-i+1;
      while(d>=1){
        cout<<d<<" ";
        d--; 
      }
      
      cout<<endl;
      i++;
      
    }

    return 0;
}
