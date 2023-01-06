#include<iostream>
#include<vector>
using namespace std;
 
 bool isPossible(vector<int> &boards, int k, int mid)
{
   int painterCount = 1;
   int boardSum = 0;
    
    for(int i = 0; i< boards.size(); i ++)
    {
        if(boardSum + boards[i] <= mid)
        {
            boardSum += boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount>k || boards[i] > mid)
            {
                return false;
            }
            boardSum = boards[i];
            
        }
        
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    for(int i = 0; i< boards.size(); i++)
    {
        sum += boards[i];
    }
    
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(isPossible(boards, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid+1;
        }
         mid = s + (e-s)/2;
    }
    return ans;
}
 
int main(){
 
  vector<int> v = {5, 5, 5, 5};
 int answer =  findLargestMinDistance(v, 2);
  cout<<answer;
  
return 0;
}