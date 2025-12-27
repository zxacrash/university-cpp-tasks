#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;

map<string, int> wordToDigit = {
    {"ZER", 0}, {"ONE", 1}, {"TWO", 2}, {"THR", 3}, {"FOU", 4},
    {"FIV", 5}, {"SIX", 6}, {"SEV", 7}, {"EIG", 8}, {"NIN", 9}
};

map<int, string> digitToWord = {
    {0, "ZER"}, {1, "ONE"}, {2, "TWO"}, {3, "THR"}, {4, "FOU"},
    {5, "FIV"}, {6, "SIX"}, {7, "SEV"}, {8, "EIG"}, {9, "NIN"}
};

int convertToNumber(const string& s) {
    int result = 0;
    for (int i = 0; i < s.length(); i += 3) {
        string word = s.substr(i, 3);
        result = result * 10 + wordToDigit[word];
    }
    return result;
}

string convertToString(int n) {
    if (n == 0) return "ZER";
    
    string result = "";
    if (n < 0) {

        n = -n;
    }
    
    string digitsStr = "";
    while (n > 0) {
        int digit = n % 10;
        digitsStr = digitToWord[digit] + digitsStr;
        n /= 10;
    }
    
    return digitsStr;
}

int main() {
    string line;
    getline(cin, line);
    
    string num1, num2;
    char op;
    
    size_t space1 = line.find(' ');
    size_t space2 = line.find(' ', space1 + 1);
    
    num1 = line.substr(0, space1);
    op = line[space1 + 1];  // + или - или *
    num2 = line.substr(space2 + 1);

    int n1 = convertToNumber(num1Clean);
    int n2 = convertToNumber(num2Clean);
    
    int result;
    if (op == '+') result = n1 + n2;
    else if (op == '-') result = n1 - n2;
    else if (op == '*') result = n1 * n2;
    
    cout << convertToString(result) << endl;
    
    return 0;
}