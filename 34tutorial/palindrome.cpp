#include<iostream>
#include<string>

using namespace std;
 
 bool isPalindrome(string str, int i, int n){
    
    if (i>n-i){   //n-i in place of j
        return true;
    }
    
    if(str[i]!=str[n-i]){  //n-i in place of j
        return false;
    }

    else{
        i++;   
        
        bool answer = isPalindrome(str, i, n);
        return answer;
    }
    
 }
 
int main(){
 
  string str = "aabaa";
  int size = str.size();
  int len = size-1;
  bool ans = isPalindrome(str, 0, len);

  if(ans){
    cout<<str<<" is palindrome"<<endl;
  }
  else{
    cout<<"Not palindrome"<<endl;
  }
  
return 0;
}