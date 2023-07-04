#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>

using namespace std;
 

int main(){

 vector<int> arr = {1, 3,3,  2, 1, 2, 3, 2};
 //creation
 unordered_map<int, int> count;

 int maxFreq = 0;
 int maxAns = 0;

 for (int i = 0; i < arr.size(); i++)
 {
    count[arr[i]]++;
    maxFreq = max(maxFreq, count[arr[i]]);
 }

 for (int i=0; i<arr.size(); i++)
 {
    if (maxFreq == count[arr[i]])
    {
      maxAns = arr[i];
      break;
    }
 }
 
 cout<<maxAns;
 


return 0;
}