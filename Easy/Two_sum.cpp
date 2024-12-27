#include<bits/stdc++.h>
using namespace std;
vector<int>twoSum(vector<int>& nums,int target){
    vector<int>result;
    long long int totalsum;
    for(int i=0;i<nums.size();i++){
        
        for(int j=i+1;j<nums.size();j++){
            totalsum=nums[j] +nums[i];
            if(totalsum==target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }

        }
    }
    return result;

}
int main(){
   
    vector<int>nums={1,2,3};
    int target=4;
    vector<int>ans=twoSum(nums,target);
    cout<<ans[0]<<" "<<ans[1];
}