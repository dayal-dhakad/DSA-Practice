#include <iostream>
using namespace std;
int main()
{

    cout << "Enter the amount" << endl;
    int amount;
    cin >> amount;
    int notes;
    cout << "Enter the note" << endl;
    cin>>notes;
    switch (notes)
    {
    case 100:
          cout<<"You need "<<amount/100<<" hundred rupee notes"<<endl;
          amount = amount - ( (amount/100) * 100);
          
    case 50:
          cout<<"You need "<<amount/50<<" fifty rupee notes"<<endl;
          
    }

    return 0;
}