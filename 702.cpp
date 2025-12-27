#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    double c = sqrt(a * a + b * b);
    cout << setprecision(4) << c;
    return 0;
}