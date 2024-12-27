#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void reverseList(ListNode* head) {
            for(auto res: head){
                cout<<res<<" ";
            }
        
    }

        
};
int main(){
    Solution solution;
    list<int>link_list={2,3,4,5};
    solution.reverseList(&link_list);
    
}