#include<iostream>
using namespace std;
 
 // No. of rows and columns is same
int main(){
 int row;
 int col;
 cin>>row;
 cin>>col;

//creating 2D array
 int **arr = new int*[row];
 for(int i= 0; i<row; i++){
    arr[i] = new int[row];
 }

//  taking input

for(int i= 0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>> arr[i][j];
    }
}
  
//   output

for(int i= 0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<< arr[i][j]<<" ";
      

    }
      cout<<endl;
}
  
return 0;
}