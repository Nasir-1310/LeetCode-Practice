#include <bits/stdc++.h>
using namespace std;

void movezerose(vector<long long int>& arr) {
    int i = 0, j = 0;
    int size=arr.size();

    // Traverse through the array to move non-zero elements to the front
    for (i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            // Swap the non-zero element with the element at position j
            swap(arr[j], arr[i]);
            j++;  // Increment j to move to the next available position for non-zero elements
        }
    }

    // After moving all non-zero elements, set the remaining elements to 0
    while (j < size) {
        arr[j] = 0;
        j++;
    }

    // Print the modified array with spaces between elements
    for (long long int res : arr) {
        cout << res << " ";
    }
    cout << endl;
}

int main() {
    vector<long long int> arr = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};
    movezerose(arr);  // Call the function to move zeros
    return 0;
}
