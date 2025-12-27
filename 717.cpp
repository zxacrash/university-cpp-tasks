#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    if (a == "1") {
        cout << "true" << endl;
    }
    else if (a == "0") {
        cout << "false" << endl;
    }
    else {
        cout << a << endl;
    }
    
    return 0;
}