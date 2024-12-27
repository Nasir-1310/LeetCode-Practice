#include<bits/stdc++.h>
using namespace std;
string reverseVowel(string s){
    string vowel="aeiouAEIOU";
    int j_start=s.length()-1;
    int i=0;
    while (i<j_start)
    {
        if(vowel.find(s[i])==string::npos)
            i++;
        else if(vowel.find(s[j_start])==string::npos)
             j_start--;
        else{
            swap(s[i],s[j_start]);
            i++;
            j_start--;
        }
    }
    
    return s;
   

}
int main(){
   
    string s="leetcode";
   ;
    cout<<reverseVowel(s);
}