#include <bits/stdc++.h>
using namespace std;

bool gainProfit(vector<int>&prices) {
        int max_profit=0;
        int min_price=INT_MAX;
        
        for(int i=0;i<prices.size();i++)
           {
                min_price=min(min_price,prices[i]);
                max_profit=max(max_profit,prices[i]-min_price);
           }
        
        cout<<"value="<<max_profit<<" "<<endl;
        
        
}

int main() {
    vector<int>prices={7,1,5,3,6,4};

       gainProfit(prices);
    return 0;
}
