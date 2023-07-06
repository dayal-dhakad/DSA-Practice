#include<iostream>
#include<vector>
using namespace std;
 
 
int main(){
 
   vector<int>nums ={ 0, 1, 1, 1, 0 , 1 , 1, 0, 0, 0, 1};
        int size = nums.size();
      
      int count=0;
      int zerocount =0;
      vector<int> counting;
      for (int i = 0; i <= size; i++)
      {
         if (nums[i]==1)
         {
            count++;
         }

         if (nums[i]==1 && nums[i-1]==0 && i == (size-1))
         {
             counting.push_back(1);
         }
      
         if (nums[i]==0)
         {
            if (count!=0)
            {
                counting.push_back(count);
            }

            zerocount++;

            if (nums[i+1] != 0 && zerocount>2)
            {
                counting.push_back(0);
            }
            
            count = 0;
         }


      }

      
      for (int i = 0; i < counting.size(); i++)
      {
         cout<<counting[i]<<" ";
      }
      








        return 0;
}