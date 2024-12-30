#include <bits/stdc++.h>
using namespace std;

bool valid_palindrome(string s) {
        
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string s1,s2;
        int i,j;
        for(i=0;i<s.length();i++)
        {   if((s[i]>='a' and s[i]<='z') or (s[i]>='0' and s[i]<='9'))
                s1.push_back(s[i]);
            // if((s[j]>='a' and s[j]<='z') or (s[i]>='0' and s[i]<='9'))
            //     s2.push_back(s[j]);

        }
       //cout<<(s1==s2);
       s2=s1;
       reverse(s2.begin(),s2.end());
        cout<<s1<<" "<<s2;
        
       
        
}

int main() {
   
    string s="ab2a";
       valid_palindrome(s);
    return 0;
}
