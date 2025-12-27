#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char normalize(char c) {
    c = tolower(c);
    if (c == 'p') return 'b';
    if (c == 'e') return 'i';
    return c;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;
        
        if (s1.length() != s2.length()) {
            cout << "No" << endl;
            continue;
        }
        
        bool similar = true;
        for (int i = 0; i < s1.length(); i++) {
            if (normalize(s1[i]) != normalize(s2[i])) {
                similar = false;
                break;
            }
        }
        
        cout << (similar ? "Yes" : "No") << endl;
    }
    
    return 0;
}