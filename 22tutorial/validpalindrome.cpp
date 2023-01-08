#include<iostream>
using namespace std;
 
  
    bool valid(char ch)
    {
        if( (ch>= 'a' && ch <= 'z') || (ch>= 'A' && ch <= 'Z')  || (ch>= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }
 
     char toLowerCase(char ch)
     {
         if((ch>= 'a' && ch<='z') || (ch>= '0' && ch<='9'))
         {
             return ch;
         }
         else
         {
             char temp = ch - 'A' + 'a';
             return temp;
         }
     }

     bool checkPalindrome(string s){
          
          int start = 0;
        int e = s.length()- 1 ; 
       
        while(start <= e)
       {
       
        if(s[start] != s[e])
        {
            return 0;
        }

        else
        {
            start++;
            e--;
        }
           
       }
          
          return 1;
     }


    bool isPalindrome(string s) {
        string temp = "";

        for(int i = 0; i< s.length(); i++)
        {
            if(valid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }

        for(int j = 0; j <  temp.length(); j++)
        {
           temp[j] =  toLowerCase(temp[j]);
        }
        
      return checkPalindrome(temp);
    }
int main(){
 
  
  
return 0;
}