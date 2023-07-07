#include<iostream>
#include<string>

using namespace std;
 
 bool isPalindrome(string str, int i, int j){
    
    if (i>j){
        return true;
    }
    
    if(str[i]!=str[j]){
        return false;
    }

    else{
        i++;
        j--;
        bool answer = isPalindrome(str, i, j);
        return answer;
    }
    
 }
 
int main(){
 
  string str = "aabbccbbaa";
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