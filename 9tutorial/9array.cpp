#include<iostream>
using namespace std;
 
 
int main(){
 /* 
 int array[100] = {1};
 cout<<array[0]<<endl;
 cout<<array[1]<<endl;
 cout<<array[2]<<endl;
 cout<<array[3]<<endl;
 cout<<array[4]<<endl;
 cout<<array[5]<<endl;
 cout<<array[99]<<endl;
 */
// set values of entire array to any value
int array[10]; 
for (int i = 0; i < 10; i++) {
    array[i] = 345;
}
cout<< array[0]<<endl;
cout<< array[1]<<endl;
cout<< array[3]<<endl;
cout<< array[4]<<endl;
cout<< array[7]<<endl;
return 0;
}