#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    
    int maxConsecutive = 0;
    int currentConsecutive = 0;
    
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            currentConsecutive++;
            maxConsecutive = max(maxConsecutive, currentConsecutive);
        } else {
            currentConsecutive = 0;
        }
    }
    
    if (maxConsecutive >= n) {
        cout << "Valid" << endl;
    } else {
        cout << "Not valid" << endl;
    }
    
    return 0;
}