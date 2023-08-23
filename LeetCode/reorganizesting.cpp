#include<iostream>
#include<string>
using namespace std;
 
  string reorganizeString(string s) {
        int i=0;
        int j=1;
m:
        while(j<s.size()){
            
            if(s[i]==s[j]){
                i++;
                j++;
                
                if(s[i]!=s[j]){
                    swap(s[i], s[j]);
                    
                }
            }
            else{
                i++;
                j++;
                goto m;
            }
        }
        for(int i= 0; i<s.size(); i++){
            if(s[i]==s[i+1]){
                return "x";
            }
        }
        return s;
    }
 
int main(){
 
 string s = "aaabb";
 cout<<reorganizeString(s)<<endl;
  
  
return 0;
}