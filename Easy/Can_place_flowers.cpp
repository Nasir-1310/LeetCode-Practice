#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
     
        
        if (n == 0){
           
             return true;
        }
           
        else if (flowerbed.size() == 1 && flowerbed[0] >= n)
            return false;
        else if ((flowerbed.size() == 1 && flowerbed[0] < n))
           {
           
             return true;
        }
        else if (flowerbed.size() == 2 && flowerbed[0] + flowerbed[1]==0 and n==1)
            return true;
        else if ((flowerbed.size() == 2 && flowerbed[0] + flowerbed[1] < n))
            return false;
        else {
            int count = 0;
            if(flowerbed[0]==0 and flowerbed[1]==0){
                count++;
                flowerbed[0]=1;
            }
             if(flowerbed[flowerbed.size()-2]==0 and flowerbed[flowerbed.size()-1]==0){
                count++;
                flowerbed[flowerbed.size()-1]=1;
            }
            
            
            
            for (int i = 2; i < flowerbed.size(); i++) {
                if (flowerbed[i - 2] == 0 && flowerbed[i - 1] == 0 && flowerbed[i] == 0) {
                    flowerbed[i - 1] = 1;
                    count++;
                  
                }
            }
            if (count < n)
            {
               
                return false;
            }
              
            else{
               
                 return true;
            }
                
        }
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> flowerbed1 = {0,1,0};
    int n1 = 1;
    cout << (solution.canPlaceFlowers(flowerbed1, n1) ? "true" : "false") << endl;

    // Test Case 2
    vector<int> flowerbed2 = {1, 0, 0, 0, 1};
    int n2 = 2;
    cout << (solution.canPlaceFlowers(flowerbed2, n2) ? "true" : "false") << endl;

    // Test Case 3
    vector<int> flowerbed3 = {0};
    int n3 = 1;
    cout << (solution.canPlaceFlowers(flowerbed3, n3) ? "true" : "false") << endl;

    // Test Case 4
    vector<int> flowerbed4 = {0, 0, 1, 0, 0};
    int n4 = 2;
    cout << (solution.canPlaceFlowers(flowerbed4, n4) ? "true" : "false") << endl;

    return 0;
}
