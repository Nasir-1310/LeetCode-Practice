#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // Pointer for nums1's last valid element
        int j = n - 1;      // Pointer for nums2's last element
        int k = m + n - 1;  // Pointer for the last position in nums1

        // Merge from the back of the arrays
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // Copy remaining elements from nums2, if any
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
        // No need to copy remaining elements from nums1; they are already in place.
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // nums1 has space for nums2
    int m = 3;  // Number of elements in nums1
    vector<int> nums2 = {2, 5, 6};  // nums2 elements
    int n = 3;  // Number of elements in nums2

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    // Output the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
