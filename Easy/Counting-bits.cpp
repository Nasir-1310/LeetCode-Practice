#include<bits/stdc++.h>
using namespace std;

vector<int> countingBits(int n) {
    vector<int>bits;
    bits.push_back(0);
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int j=i;
        while (j>0)
        {
            count+=(j&1);
            j>>=1;
        }
        bits.push_back(count);
        count=0;
        
    }
    return bits;
}

int main() {
    int decimal;
    cout << "Enter a decimal nber: ";
    cin >> decimal;

    vector<int>result = countingBits(decimal);
    for(int res:result)
        cout<<res<<" ";
   
    

    return 0;
}
