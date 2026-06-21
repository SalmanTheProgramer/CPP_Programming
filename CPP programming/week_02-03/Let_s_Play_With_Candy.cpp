#include <bits/stdc++.h>    // xpsc_mod2_pr_01
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++) {

        cin >> arr[i];
    }

    int expect = 0;

    // traversing array
    for (int i=0; i<n; i++) {

        if (arr[i] == expect) { // increase expected value

            expect++;

        }else if (arr[i] > expect) {

            break;
        }

        // if (a[i] < expected), just skip the condition (duplicates)
    }

    cout << expect;
    
    return 0;
}