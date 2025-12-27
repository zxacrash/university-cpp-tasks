#include <iostream>
using namespace std;

bool isLucky(int n) {
    int sum = 0;
    int temp = n;
    int lastDigit = n % 10;
    
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    return (lastDigit != 0 && sum % lastDigit == 0);
}

int main() {
    int n;
    cin >> n;
    
    if (isLucky(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}