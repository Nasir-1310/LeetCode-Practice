#include<bits/stdc++.h>
using namespace std;
void solution(){
    string word1, word2,s3;
    cin>>word1;
    cin>>word2;
  

    for(int i=0;i<(word1.length()+word2.length());i++){
        if(i<word1.length()){
           
            s3.push_back(word1[i]);
            
        }
        if(i<word2.length()){
            s3.push_back(word2[i]);
           
        }
    }
    cout<<s3;
}
int main(){
    solution();
}