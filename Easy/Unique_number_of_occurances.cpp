#include <bits/stdc++.h>
using namespace std;

bool uniqueOccarances(vector<int>&arr) {
        map<int,int>mapvalue;
        for(int res: arr)
            mapvalue[res]++;
        
        set<int>duplicate_check;

        for(auto check: mapvalue)
            {
                if(duplicate_check.find(check.second)!=duplicate_check.end()){
                    return false;
                }
                duplicate_check.insert(check.second);

            }
            return true;


        
}

int main() {
    vector<int>arr={1,2};
        cout<<uniqueOccarances(arr);
    return 0;
}
