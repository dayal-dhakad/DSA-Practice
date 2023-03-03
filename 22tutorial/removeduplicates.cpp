#include<iostream>
#include<string>

using namespace std;
 
 void removeDuplicate(string s)
 {
     int i = 0;
     int j = i+1;
    while(i < s.length()-1)
    {
        if(s[i] == s[j])
        {
            s.pop_back(i);
            s.pop_back(j);
        }
    }
 }
 
int main(){
 
 string s = "abbcdaadcz";

  
  
return 0;
}