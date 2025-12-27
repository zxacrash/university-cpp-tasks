#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int x;
    cin >> x;
    
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}