#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>&nums) {
        vector<int>prefix_sum(nums.size());
         prefix_sum[0]=nums[0];
        
        for(int i=1;i<nums.size()+1;i++)
            prefix_sum[i]=prefix_sum[i-1]+nums[i];

        int total_sum=prefix_sum[prefix_sum.size()-1];
       

        int i=0,j=nums.size()-1;
        int check=0;

        if((total_sum-nums[i]==0 and i==0))
            return i;
        else if(total_sum-nums[i]==0 and i==j)
            return i;
        else{
            for(int i=1;i<j;i++)
            {
                /
                check=total_sum-nums[i];
                if(check%2==0){
                   
                    if(check/2==prefix_sum[i-1])

                        return i;
                }
            }
        }
        return -1;
        

        // for(int i=0;i<prefix_sum.size();i++)
        //     cout<<prefix_sum[i]<<" ";
}

int main() {
    vector<int>nums={2,1,-1};
    
    cout<<pivotIndex(nums);
    return 0;
}
