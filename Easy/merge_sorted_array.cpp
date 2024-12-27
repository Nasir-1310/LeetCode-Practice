#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // Pointer for the last valid element in nums1
        int j = n - 1;      // Pointer for the last element in nums2
        int k = m + n - 1;  // Pointer for the last position in nums1

        // Merge nums2 into nums1 from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];  // Place nums1[i] in the correct position
            } else {
                nums1[k--] = nums2[j--];  // Place nums2[j] in the correct position
            }
        }

        // Copy remaining elements from nums2, if any
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // nums1 has space for nums2
    int m = 3;  // Number of elements in nums1
    vector<int> nums2 = {2, 5, 6};  // nums2 elements
    int n = 3;  // Number of elements in nums2

    // Merge the arrays (nums1 will be modified in place)
    solution.merge(nums1, m, nums2, n);

    // Output the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
