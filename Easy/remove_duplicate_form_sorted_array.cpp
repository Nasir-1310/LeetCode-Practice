#include <bits/stdc++.h>
using namespace std;

bool uniqueOccarances(vector<int>&nums) {
        unordered_set<int>unique;
        vector<int>store;
        for(int res: nums){
            unique.insert(res);
            
        }
        int k=unique.size();
        int i=k-1;
        for(int res: unique){
            nums[i]=res;
                i--;
        }
        for(int j=k;j<nums.size();j++)
            nums[j]=-200;
        // cout<<"k="<<k<<" ";
        for(auto res: nums)
            cout<<res<<" ";
        
}

int main() {
    vector<int>nums={-3,-1,0,0,0,3,3};

       uniqueOccarances(nums);
    return 0;
}
