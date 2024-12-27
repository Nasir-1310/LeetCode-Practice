#include <bits/stdc++.h>
using namespace std;

bool frequencyOccarances(vector<int>&nums) {
        map<int,int>frequency;
      
        for(int res: nums){
            frequency[res]++;
        }
        int max=0;
        int value=0;
        for(auto res: frequency)
        {
            if(res.second>max)
                {
                    max=res.second;
                    value=res.first;
                }
        }
        
        
        cout<<"value="<<value<<" "<<endl;
        for(auto res: frequency)
            cout<<res.first<<":  "<<res.second<<endl;;
        
}

int main() {
    vector<int>nums={2,2,1,1,1,2,2};

       frequencyOccarances(nums);
    return 0;
}
