#include <iostream>
using namespace std;

int main()
{
    /* pattern 1:-
       int n;
       cin >> n;

       int i = 1;

       while (i <= n)
       {
           int j = 1;
           while (j <= n)
           {
               cout << "*";
               j++;
           }
           cout << endl;
           i++;
       }


       pattern 2:-


        int n;
       cin >> n;
       int i = 1;

       while (i <= n)
       {
           int j = 1;
           while (j <= n)
           {
               cout << i;
               j=j+1;
           }

           cout << endl;
           i++;
       }



        int n;
       cin >> n;
       int i = 1;

       while (i <= n)
       {
           int j = 1;
           while (j <= n)
           {
               cout << j;
               j=j+1;
           }

           cout << endl;
           i++;
       }




        int n;
       cin >> n;
       int i = 1;

       while (i <= n)
       {
           int j = n;
           while (j >= 1)
           {
               cout << j;
               j=j-1;
           }

           cout << endl;
           i++;
       }



        int n;
       cin >> n;
       int i = n;

       while (i >=1)
       {
           int j = 1;
           while (j <= n)
           {
               cout << i;
               j=j+1;
           }

           cout << endl;
           i--;
       }



       int n;
       cin >> n;

       int i= 1;
       int count = 1;

       while (i<=n)
       {
        int j = 1;
        while (j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
       i++;
       }


       int n;
       cin >> n;

       int i = 1;

       while (i <= n)
       {
           int j = 1;
           while (j <= i)
           {
               cout << "*";
               j++;
           }
           cout << endl;
           i++;
       }


        int n;
       cin >> n;

       int i = 1;

       while (i <= n)
       {
           int j = 1;
           while (j <= i)
           {
               cout << i;
               j++;
           }
           cout << endl;
           i++;
       }


        int n;
       cin >> n;

       int i = 1;
       int count = 1;
       while (i <= n)
       {
           int j = 1;
           while (j <= i)
           {
               cout << count;
               count++;
               j++;
           }
           cout << endl;
           i++;
       }


           int n;
       cin >> n;

       int i = 1;
       int count = 1;
       while (i <= n)
       {
           int j = 1;
           int value = i;
           while (j <= i)
           {
               cout << value;
               value++;
               j++;
           }
           cout << endl;
           i++;
       }



           int n;
       cin >> n;

       int i = 1;
       int count = 1;
       while (i <= n)
       {
           int j = 1;
           int value = i;
           while (j <= i)
           {
               cout << value;
               value++;
               j++;
           }
           cout << endl;
           i++;
       }


     int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << i + j -1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

   // AAA
   // BBB
   // CCC

   int n;
   cin>>n;

   int row;

   row = 1;

   while (row<=n)
   {
       int col = 1;
       while (col<=n)
       {
          char ch= 'A'+row - 1;
          cout<< ch;
          col++;
       }
       cout<<endl;
       row++;
     }
    */
        int n;
        cin>> n;
         int i= 1;
         while (i<=n)
         {
            int space = n-i;
            while (space)
            {
                cout<<" ";
                space--;
            }
             int j=1;
             while (j<=i)
             {
                cout<<j;
                j++;
             }
             
             int k=i-1;
             while(k)
             {
                cout<< k ;
                k--;
             }
             

            cout<<endl;
            i++;

            
         }
         

}