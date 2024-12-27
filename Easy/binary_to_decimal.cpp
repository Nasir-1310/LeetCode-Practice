#include <iostream>
#include <string>
#include<bitset>
using namespace std;

string decimalToBinary(int num) {
    string binary = ""; // To store binary representation
    
    // Handle the case for 0
    if (num == 0) 
        return "0";

    // Convert to binary
    while (num > 0) {
        binary = to_string(num % 2) + binary; // Add the remainder (0 or 1) to the binary string
        cout<<binary<<" ";
        num /= 2; // Divide the number by 2
    }

    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    string binary = decimalToBinary(decimal);
    cout << "Binary representation: " << binary << endl;
    int num=6;
    cout<<bitset<8>(num).to_string();
    

    return 0;
}
