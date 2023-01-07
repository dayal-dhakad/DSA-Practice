#include<iostream>
using namespace std;
 
 int isPalindrome(char ch[], int n)
 {
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        if(ch[s] != ch[e])
        {
            return 0;

        }
        
        else
        {
            s++;
            e--;
        }
        return 1;
    }
    
    
 }


 void reverse(char name[], int n)
 {
    int s = 0;
    int e = n-1;

    while(s<e)
    {
        swap(name[s++], name[e--]);
    }
 }

 
 int getLength(char name[])
 {
    int count = 0;
    for(int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
 }
 
int main(){
 
 char name[20];
 cout<< "Enter your name"<<endl;

 cin>> name;
 cout<<"Your name is ";
 cout<<name<<endl;
  int len = getLength(name);
  cout<<"Length of string is "<<len<<endl;

  reverse(name, len);
  cout<<"Your name is ";
 cout<<name<<endl;
 
cout<<"Palindrome or Not "<<isPalindrome(name, len);

return 0;
}