#include <iostream>
using namespace std;

int main(){
 int n;
 cin >> n;
 int a = 0;
 int arr1[n], arr2[n];


    for (int i=0; i < n ; i++ ){
        cin >> arr1[i];
    }

    for (int j=0; j < n ; j++ ){
        cin >> arr2[j];
    }

    for (int i = 0 ; i < n; i++) {
        
        for (int j=0 ; j < n ; j++){
            if (arr1[i] == arr2 [j] ){
    a++;
    break;
            }
        }
    }
    cout << a << "";
    cout << endl;
return 0;
}



// my code above
//the true code below
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n], b[n];
    int freqA[101] = {0}; // Frequency array for a (values 1-100)
    int freqB[101] = {0}; // Frequency array for b (values 1-100)
    
    // Read array a and count frequencies
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freqA[a[i]]++;
    }
    
    // Read array b and count frequencies  
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        freqB[b[i]]++;
    }
    
    int pairs = 0;
    
    // For each possible value, count the minimum frequency between both arrays
    for (int value = 1; value <= 100; value++) {
        pairs += min(freqA[value], freqB[value]);
    }
    
    cout << pairs << endl;
    return 0;
}