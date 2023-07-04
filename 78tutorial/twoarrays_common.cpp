#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    vector<int> arr1={1, 2, 3, 4, 5} ;
    vector<int> arr2={2, 4, 6, 8} ;
  	unordered_map<int, int> count;
    for(int i=0; i<arr1.size(); i++){
		count[arr1[i]]++;
	}

	for(int i=0; i<arr2.size(); i++){
		count[arr2[i]]++;
	}
	 int coun = 0;
	for(auto i:count){
         if(i.second>1){
           coun++;
         }
    }
    int x = (arr1.size() + arr2.size())-coun;
        cout<<coun<<" "<<x;
  
return 0;
}