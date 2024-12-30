#include<bits/stdc++.h>
using namespace std;
long long int flippingBits(long long int n){
    vector<int>decimal(32,0);
    for(int i=31;i>=0;i--)
    {
        decimal[i]= n & 1;
            n=n>>1;
    }
   
    // for(int i: decimal)
    //     cout<<i<<" ";
    //  cout<<"\n";
    for(int i=0;i<32;i++){
        decimal[i]=decimal[i] xor 1;
    }
    // for(int i: decimal)
    //     cout<<i<<" ";
    long long int ans=0;
    for(int i=0;i<32;i++)
        ans=ans+decimal[i]*pow(2,31-i);
    // cout<<"\n";
    // cout<<ans;

    return ans;
}
int main(){
    flippingBits(2);
}