#include<iostream>
#include<map>
#include<string>
using namespace std;
 
 
int main(){
 
 string app = "apple";
 map<char, int> count;
 
 
 for(int i=0; i<app.size(); i++){
    count[app[i]]++;
 }
 

 for(auto i: count){
    cout<<i.first<<" "<<i.second<<endl;
 }
 
 
    
  
  
return 0;
}