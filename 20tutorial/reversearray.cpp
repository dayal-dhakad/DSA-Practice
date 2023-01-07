#include<iostream>
#include <bits/stdc++.h> 
 using namespace std;
void reverseArray(vector<int> &arr , int m)
{
    int i = m+1;
    int j = arr.size() -1;
	while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

 
int main(){
 //reversing array after m index;
  
  
return 0;
}