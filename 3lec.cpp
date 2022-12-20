#include <iostream>

using namespace std;

int main()
{
    /*
        char ch;

        cin >> ch;

        if (ch >= 'A' && ch <= 'Z'){

            cout << "This is Uppercase" << endl;

        }

        else if (ch >= 'a' && ch <= 'z'){

            cout << "This is Lowercase" << endl;

        }

        else {

            cout << "This is Numeric" << endl;

        }


        int n;
        cin>> n;
        int  sum = 0;

        int i= 2;
        while (i<=n)
        {
        sum = sum +i;
        i= i+2;
        }
        cout<< sum;

    */
        int n;
        cin>> n;

        int i= 2;
        while(i<n){
            
            if (n%i==0)
            {
                cout<<n<<" is not a prime number.";
                break;
            }
            else{
                cout<< n <<" is a prime number.";
                break;
            }
             i=i+1;
        }

}
