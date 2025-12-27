#include <iostream>
#include <cmath>
using namespace std;

bool prime(int a) {
    if (a <= 1) return false;
    
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int x;
    cin >> x;
    cout << (prime(x) ? "Yes" : "No");
    return 0;
}
    