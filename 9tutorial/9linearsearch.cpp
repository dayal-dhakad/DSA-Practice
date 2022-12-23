#include<iostream>
using namespace std;

bool search(int array[], int size, int key){
   
   for (int i = 0; i < size; i++)
   {
    if (array[i]==key)
    {
        return 1;
    }
    
   }
   return 0;

}
 
int main(){
 
  int array[6]= {4, 5, 3, 8, 2, 0};
  int key;
  int size;
  cout<<"Enter the number you want to search in this array"<<endl;
  cin>>key;
  cout<<"Enter the size of array"<<endl;
  cin>>size;
  bool found = search(array, size, key);
   if (found)
   {
       cout<<"This element is present in array";
   }
   else{
    cout<<"This element is not present in array";
   }
return 0;
}