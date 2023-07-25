#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
 int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        sort(people.begin(), people.end());  // 3, 3, 4, 5
        int i = 0; 
        int sum = 0;
        while(i < people.size())
        {
            
            cout<<endl<<"Value of i is : "<<i<< " and array value is :"<<people[i]<<endl;
            if (people[i]<limit)
            {
                sum+=people[i];
                cout<<"sum initial : "<<sum;

                if(sum<limit && people[i+1]==limit){
                    count++;
                    i++;
                    sum=0;
                    cout<<"In first if "<<endl;
                }

               else if(sum<limit){
                    cout<<"sum in if "<<sum<<endl;
                    i++;
                }
                
                else if(sum>limit){
                    count++;
                    i++;
                    sum=0;
                }

            }

            else if(people[i]==limit){
                count++;
                i++;
            }
            
            cout<<"Count is : "<<count<<endl;
        }
        




        return count;
    }
 
int main(){
 vector<int> people = {3,5,3,4};
 int limit = 5;
 int size = people.size();


  
 cout<<endl<<"Answer"<< numRescueBoats(people, limit)<<endl;
  

return 0;
}