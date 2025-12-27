#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    
    cin >> s >> n;
    
    int count = 0;
    

    for (char c : s) {
        if (c >= '0' && c <= '9') {
            count++;
        }
    }
    

    if (count >= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}