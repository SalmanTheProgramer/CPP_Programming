#include <bits/stdc++.h>    // Problem NO. 05: Choose 3
using namespace std;

// It was tricky too (0_0) ,But I nailed it :)

int main() {
    
    int t;
    cin >> t;

    // execution against test cases
    while (t--) {

        int n, s;
        cin >> n >> s;

        int arr[n];
        for (int i=0; i<n; i++) {

            cin >> arr[i];
        }

        // sorting the array in order to get improvement and efficiency in searching
        sort (arr, arr+n);

        bool found = false;

        // traversing the array
        for (int i=0; i<n-2; i++) {

            int l = i+1;
            int r = n-1;

            while (l < r) { // insearch of right elements

                int sum = arr[i] + arr[l] + arr[r];

                if (sum == s) {

                    found = true;
                    break;

                }else if (sum < s) {
                    
                    l++;
                
                }else {

                    r--;
                }
            }

            // terminating inner search loop
            if (found) break;
        }

        // output
        if (!found) {

            cout << "NO" << endl;

        }else {

            cout << "YES" << endl;
        }
    }
    
    return 0;
}