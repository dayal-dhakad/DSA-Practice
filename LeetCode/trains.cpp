#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

  int minSpeedOnTime(vector<int>& dist, double hour) {
        
        
       
        int size = dist.size();
        int time = 0.0;
        int speed = 1;
        int inttime = 0;
        int count = 0;


            m:
            for(int j=0; j<size;j++ ){
                if(j==size-1){
                double t = (double)dist[j]/(double)speed;
                time += t; 
                count++;
                cout<<"Time : "<<time<<endl;
                cout<<"Speed : "<<speed<<endl;
                }
                else{
                 double t = (double)dist[j]/(double)speed;
                  time += ceil(t);
                   cout<<"Time !count : "<<time<<endl;
                     cout<<"Speed !count : "<<speed<<endl;
                }
            }
            if(time<=hour){
                cout<<"Returning speed"<<endl;
                return speed;
            }
            else{
                if(count!=1){
                     speed++;
                    time = 0;
                    goto m;
                   }
                    else{
                            cout<<"Returning count -1"<<endl;
                    return -1;  
                    }
                
                }
           
            return -1;
        
    }
 
 
int main(){
 vector<int> dist = {1, 3, 2};
 double hour = 2.7;

cout<< minSpeedOnTime(dist, hour);
  
  
return 0;
}