#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;
 
 
int main(){
 
 //creation
 unordered_map<string, int> m;

//insertion
//1 method
pair<string, int> p1 = make_pair("Dayal", 3);

//2 method
pair<string, int> p2("Dhakad", 2);
 
 //3 method 
 m["DD"] = 5;
  
return 0;
}