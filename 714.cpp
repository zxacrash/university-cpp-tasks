#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int arr[n][m];
    int transposed[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposed[j][i] = arr[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transposed[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}