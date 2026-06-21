#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i=0; i<n; i++) {

        cin >> arr[i];
    }

    int closest = -1;

    for (int i=0; i<n; ++i) {

        int val = arr[i];

        if (val <= k) {

            if (val > closest) {

                closest = val;
            }
        }
    }

    cout << closest;
    
    return 0;
}