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
m.insert(p1);


//2 method
pair<string, int> p2("Dhakad", 2);
m.insert(p2);


 //3 method 
 m["DD"] = 5;

 cout<<m["DD"]<<endl;
 cout<<m["Dayal"]<<endl;
 cout<<m.at("Dhakad")<<endl<<endl;


 cout<<m.size()<<endl;
 m.erase("DD");

 cout<<m.size()<<endl;

 //traversing
 for (auto i:m)
 {
    cout<<i.first<<" "<<i.second<<endl;
 }

 //travesing using an Iterator
 cout<<endl;

 unordered_map<string, int> :: iterator it = m.begin();

 while (it != m.end())
 {
    cout<<it->first <<" "<< it->second<<endl;
    it++;
 }

 
 

return 0;
}