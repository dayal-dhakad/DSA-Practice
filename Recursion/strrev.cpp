#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
    
    void strRev(string str, int i){
        
        if(i<4){
            strRev(str, i+1); // agr i++ likhuga to i ki value pass ho jayegi fhir increment hoga to i ki value kabhi change ni hogi is liye yaha ++i likhte h jisse ki pehle increment ho jaye fhir value pass ho, isiliye pehle keval DDDDDDDDDDDDDDDDD print hora tha 
            
        }
          cout<<str[i];
        
    }
 
int main(){
     string str="DAYAL" ;
   // getline(cin, str);
    cout<<endl;
    strRev(str, 0);
  
  
return 0;
}