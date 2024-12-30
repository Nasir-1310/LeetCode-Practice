#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int >arr={3,2,6,1,10};
    sort(arr.begin(),arr.end(),greater<int>());
    double ans=43.4456674;
    
    for(auto res: arr)
        cout<<res<<" ";
    cout<<endl;

    cout<<fixed<<setprecision(4)<<ans<<endl;

    
}