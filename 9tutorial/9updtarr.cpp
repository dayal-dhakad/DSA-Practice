#include<iostream>
using namespace std;
 int update(int array[]){
    array[0]= 124;
 }
 
int main(){
 
  int array[10] = { 1, 4, 5, 2, 8, 24, 64, 21, 12, 42};
  cout<<array[0]<<endl;

  update(array);
cout<<array[0];
  
return 0;
}