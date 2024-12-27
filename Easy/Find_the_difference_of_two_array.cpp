#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<vector<int>>findDifference(vector<int>&nums1,vector<int>&nums2){
            set<int>set1;
            set<int>set2;
            for(int num:nums1)
                set1.insert(num);
            
             for(int num:nums2)
                set2.insert(num);
            
           
            for(int num:set1)
                if(set2.find(num)!=set2.end())
                    set2.erase(num);
            for(int num:nums2)
                if(set1.find(num)!=set1.end())
                    set1.erase(num);
        vector<int>numuni1(set1.begin(),set1.end());
        vector<int>numuni2(set2.begin(),set2.end());
    return {numuni1,numuni2};
        }
};
int main(){
    Solution solution;
    vector<int>nums1={1,2,3};
    vector<int>nums2={2,4,6};
    vector<vector<int>>ans=solution.findDifference(nums1,nums2);
    for(int res:ans[0])
        cout<<res<<" ";
    cout<<endl;
     for(int res:ans[1])
        cout<<res<<" ";
    
}