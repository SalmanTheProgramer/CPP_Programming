#include <bits/stdc++.h>    // Problem NO. 02: Sort It 2
using namespace std;

int* sort_it (int n) {

    int* arr = new int [n]; // n size dynamic array

    // taking array elements
    for (int i=0; i<n; i++) {

        cin >> arr[i];
    }

    // sorting descending order
    sort (arr, arr+n, greater <int> ());

    return arr; // returning sorted array

}

int main() {
    
    int n;
    cin >> n;

    // recieving sorted array 
    int *a = sort_it (n);

    // output
    for (int i=0; i<n; i++) {

        cout << a[i] << " ";
    }

    return 0;
}