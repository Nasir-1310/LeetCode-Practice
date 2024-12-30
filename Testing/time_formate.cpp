#include <iostream>
#include <sstream>
#include <iomanip> // For setw, setfill
using namespace std;

int main() {
    int correct_hour = 7;
    int m = 5;
    int ss = 9;

    // Using stringstream to format the time as HH:MM:SS
    stringstream formatted_time;
    formatted_time << setw(2) << setfill('0') << correct_hour << ":"
                  << setw(2) << setfill('0') << m << ":"
                  << setw(2) << setfill('0') << ss;
    cout<<formatted_time;

    // Convert to string and output
    string result = formatted_time.str();
    cout << "Formatted Time: " << result << endl; // Outputs: 07:05:09
    return 0;
}
