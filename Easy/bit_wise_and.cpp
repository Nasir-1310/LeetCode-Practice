#include<bits/stdc++.h>
using namespace std;
bool even_odd(int num){
    return(num & 1);
}
bool check_power(int num){
    if (num > 0) {
        if ((num & (num - 1)) == 0) {
        return true; // Power of two
    }
}
return false;
}
int main(){
    cout<<even_odd(2);
    cout<<"\n";
    cout<<check_power(15);
}