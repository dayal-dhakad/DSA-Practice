#include<iostream>
#include<vector>
using namespace std;

 vector<void> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {

    int i = 0, j = 0; 
    int k=0;
    
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr1[k++] = arr1[i++];
        }
        else{
            arr1[k++] = arr2[j++];
        }
    }

    //copy first array k element ko
    while(i<n) {
        arr1[k++] = arr1[i++];
    }

    //copy kardo second array k remaining element ko
    while(j<m) {
        arr1[k++] = arr2[j++];
    }
}

void print(vector<int> ans, int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<" ";
    }
    cout << endl;
}

int main() {

   vector <int> arr1 = {1,3,5,7,9, 0, 0, 0};
   vector <int> arr2 = {2,4,6};

  

   ninjaAndSortedArrays(arr1, arr2, 5, 3);

print(arr1, 8);


    return 0;
}