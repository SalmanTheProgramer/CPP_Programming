#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int odd = 1, even = n; // positions

    for (int i=1; i<=n; i++) {

        if (i%2 == 0) { // at even positions
            
            cout << even << " ";
            even--;
        
        }else { // at odd positions

            cout << odd << " ";
            odd++;
        }
    }
    
    return 0;
}