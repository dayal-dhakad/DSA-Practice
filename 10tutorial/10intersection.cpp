#include<iostream>
using namespace std;
 
 
int main(){
 
  int arr[5]= {1, 2, 3, 4, 5};
  int brr[5]= {2, 3, 5, 4, 0};

  for (int i = 0; i < 5; i++)
  {
    for ( int j = 0; j< 5; j++)
    {
        if (arr[i] == brr[j])
        {
            cout<<arr[i]<< " is intersection"<<endl;
        }
        
    }
    
  }
  
  
return 0;
}