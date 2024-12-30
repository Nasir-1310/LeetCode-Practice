#include<bits/stdc++.h>
using namespace std;
int lonelyinteger(vector<int> a) {
    map<int,int>frequency_count;
    for(int i=0;i<a.size();i++)
    {
        frequency_count[a[i]]++;
    }
    for(auto res: frequency_count)
        {
            if(res.second==1)
                return res.first;
        }

}

int main()
{
   

    vector<int>a={1,2,4,2,1};

  
    int result = lonelyinteger(a);

    cout << result << "\n";



    return 0;
}



