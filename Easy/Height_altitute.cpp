#include <bits/stdc++.h>
using namespace std;

void largest_altitute(vector<int>&gain) {
        vector<int>sumarray(gain.size()+1);
         sumarray[0]=0;
        
        for(int i=0;i<gain.size()+1;i++)
            sumarray[i+1]=sumarray[i]+gain[i];
        
   
        sort(sumarray.begin(),sumarray.end());
        cout<< (sumarray[gain.size()]);
        // for(int i=0;i<sumarray.size();i++)
        //     cout<<sumarray[i]<<" ";
}

int main() {
    vector<int>gain={5,-7,4,2};
    
   
    largest_altitute(gain);
    return 0;
}
