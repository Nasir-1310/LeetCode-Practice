#include<bits/stdc++.h>
using namespace std;
string flippingBits(string s){
    set<char>unique_alp;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    

    for(int i=0;i<s.length();i++)
        {
            //  if(s[i]!=" ")
                unique_alp.insert(s[i]);
        }
        // for(auto res: unique_alp);
        //     cout<<res<<" ";
        //cout<<unique_alp.size();
        string ans;

        if(unique_alp.size()==27)
          ans="pangram";
        else
         ans="not pangram";
    return ans;
}
int main(){
    cout<<flippingBits("nasir ");
}