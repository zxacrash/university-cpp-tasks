#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "Valid" << endl;
        return 0;
    }
    
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            cout << "Not valid" << endl;
            return 0;
        }
        temp /= 10;
    }
    
    cout << "Valid" << endl;
    return 0;
}