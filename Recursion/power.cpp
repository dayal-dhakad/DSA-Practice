#include<iostream>
using namespace std;

int power(int num, int i){
    if(i==1){
        return num;
    }

    return num * power(num, i-1);

}
 
int main(){
 
  int num = 5;
  int i = 3;

  cout<<power(num, i)<<endl;
  
return 0;
}