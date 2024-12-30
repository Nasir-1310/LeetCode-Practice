#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="1234";
    string num;
    int total_num=stoi(s);
    int first_two_digit;
    
    num=s.substr(0,2);//(starting index, length)
    first_two_digit=stoi(num);


    cout<<first_two_digit<<endl;
    cout<<total_num-1;

    //integer to string
    cout<<"\n";
    int num1=23;
    string ss="num1";
    cout<<ss;

}