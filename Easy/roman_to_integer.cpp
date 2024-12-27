#include<bits/stdc++.h>
using namespace std;
int roman_to_decimal(string s){
    map<char,int>value;
    value['I']=1;
    value['V']=5;
    value['X']=10;
    value['L']=50;
    value['C']=100;
    value['D']=500;
    value['M']=1000;
    int num=0;
    for(int i=0;i<s.length();i++){
        if(value[s[i]]<value[s[i+1]])
            num-=value[s[i]];
        else
            num+=value[s[i]];
    }
    return num;
}
int main(){
    string s="XI";


    int num=roman_to_decimal(s);
    cout<<num;
}