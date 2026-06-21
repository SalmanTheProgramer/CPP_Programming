#include <bits/stdc++.h>    // Problem NO. 01: Sort It
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) {

        cin >> arr[i];
    }

    // sorting ascending order
    sort (arr, arr+n);
    
    // output: 1st sort
    for (int i=0; i<n; i++) {

        cout << arr[i] << " ";
    }

    cout << endl;

    // sorting descending order
    sort (arr, arr+n, greater <int> ());

    // output: 2nd sort
    for (int i=0; i<n; i++) {

        cout << arr[i] << " ";
    }
    
    return 0;
}