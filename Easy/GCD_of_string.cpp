#include <bits/stdc++.h>
#include <string>
#include <numeric> // For std::gcd
using namespace std;

string gcdOfStrings(string str1, string str2) {
    // Check if concatenated strings are equal in both orders
    if (str1 + str2 != str2 + str1) {
        return "";
    }

    // Find the GCD of the lengths of the strings
    int lenGCD =std::gcd(str1.length(), str2.length());

    // Return the substring of length equal to the GCD
    return str1.substr(0, lenGCD);
}

int main() {
    string str1, str2;

    // Example 1
    str1 = "ABCABC";
    str2 = "ABC";
    cout << "Example 1 Output: " << gcdOfStrings(str1, str2) << endl;

    // Example 2
    str1 = "ABABAB";
    str2 = "ABAB";
    cout << "Example 2 Output: " << gcdOfStrings(str1, str2) << endl;

    // Example 3
    str1 = "LEET";
    str2 = "CODE";
    cout << "Example 3 Output: " << gcdOfStrings(str1, str2) << endl;

    return 0;
}
