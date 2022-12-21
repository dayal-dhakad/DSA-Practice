#include <iostream>
using namespace std;
int main()
{
     int n ;
     cin>>n;
    {
        int f = 1;
        while (f<=n*2-1)
        {
            cout<<"- ";
            f++;
        }
        cout<<endl;
    }

   
    int i = 1;

    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "* ";
            space--;
        }

        int j = 1;
        char ch = 'A';
        while (j <= i)
        {
            cout << ch << " ";

            j++;
            ch++;
        }

        int k = i - 1;
        char cd = 65 + i - 2;
        while (k)
        {
            cout << cd << " ";
            k--;
            cd--;
        }

        int star = n - i;
        while (star)
        {
            cout << "* ";
            star--;
        }
        i++;
          
        if(i<=n){
cout << endl; 
        }
          
        
    }
 
    cout<<endl;
    { 

    int x = n-1;
    int z= 1;
    while (z<=x)
    {
        int y= 1;
        while(y<=z){
            cout<<"* ";
            y++;
        }
        
        int w = x-z+1;
        char ce= 'A';
        while (w)
        {
            cout<<ce<<" ";
            ce++;
            w--;
        }
        
        char cv= 65+(x-2)-(z-1);
        int v= 1;
        while(v<=x-z){
            cout<<cv<<" ";
            cv--;
            v++;    
        }
      
      int str = 1;
      while (str<=z)
      {
        cout<<"* ";
        str++;
      }
      
        

        cout<<endl;
        z++;
    }
    
    }
     {
        int f = 1;
        while (f<=n*2-1)
        {
            cout<<"- ";
            f++;
        }
        cout<<endl;
    }
 
    return 0;
}