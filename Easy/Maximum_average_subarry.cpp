#include <bits/stdc++.h>
using namespace std;

void max_average_subarray(vector<int>&nums,int k) {
        vector<int>sumarray;
        long long int sum=0;
        int maxsum=0;
        for(int i=0;i<k;i++)
            maxsum+=nums[i];
            sum=maxsum;
        for(int i=k;i<nums.size()-k+1;i++)
        {
            maxsum+=nums[i]-nums[i-k];
            if(maxsum>sum)
                sum=maxsum;
        }
       
        
        double ans=sum/(double)k;
      return ans;

}

int main() {
    vector<int>nums={5};
    int k=1;
    max_average_subarray(nums,k);
    return 0;
}
