#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i=0; i<n; i++) {

        cin >> a[i];
    }

    // sorting descending order for efficiency in search
    sort (a, a+n, greater<int> ()); 

    //bool notFound = false;

    // checking the condition
    for (int i=0; i<n; i++) {

        if (a[i] <= k) {

            cout << a[i];
            //break;

            return 0;

        } //else {

        //     notFound = true;
        // }
    }

    //if (notFound) cout << "-1";

    cout << "-1";
    
    return 0;
}