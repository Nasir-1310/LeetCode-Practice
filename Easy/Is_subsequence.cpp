#include <bits/stdc++.h>
using namespace std;

void isSubsequence(string s,string t) {
    int i = 0, j = 0;
    int size_s=s.length();
    int size_t=t.length();
    int count=0;
    if(size_s>size_t)
        cout<<"false";
    else{
        for(i=0;i<size_t;i++)
        {
            if(s[j]==t[i])
            {
                count++;
                j++;
            }
            
        }
    }
    if(count==size_s)
        cout<<"true";
    else
        cout<<"false";

}

int main() {
  string s="nasir";
  string t="nasdfdidsr";
    isSubsequence(s,t);  // Call the function to move zeros
    return 0;
}
