#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = *max_element(candies.begin(), candies.end()); // Find the maximum candies any kid has
 
        vector<bool> result(candies.size()); // To store the result for each kid
        
        // Iterate through each kid's candy count
        for (int i = 0; i < candies.size(); i++) {
            // After adding extraCandies, check if it's >= maxCandy
            if (candies[i] + extraCandies >= maxCandy) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }
        
        return result; // Return the result array
    }
};

int main() {
    Solution solution;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    
    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
    
    // Print the result
    for (bool res : result) {
        cout << (res ? "true" : "false") << " ";
    }
    
    return 0;
}
