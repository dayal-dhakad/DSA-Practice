#include<iostream>
#include<unordered_map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    vector<int> A = {3, 8, 1, 4};
    int m = 6;
    vector<int>ans;

     for (int i = 0; i < A.size(); i++)
     {
         
         int diff = 0;
         diff= A[i]-m;
         if (diff<0)
         {
            diff = diff * (-1);
            ans.push_back(diff);
         }
         else{ 
              ans.push_back(diff);
         }
     }

     

     cout<<endl<<endl;


     for (int i = 0; i < ans.size()-1; i++)
     {
       
            if(ans[i]>ans[i+1]){
                
                swap(ans[i], ans[i+1]);
                i=-1;
            }

         
     }
  
     
     
     
return 0;
}