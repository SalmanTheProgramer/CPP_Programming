#include <bits/stdc++.h>    // Problem 01: Replace Word
using namespace std;

int main() {
    
    int t;
    cin >> t;

    // execution against test cases
    while (t--) {

        string s, x;
        cin >> s >> x;

        // taking the lenght of x
        int len = x.length ();

        // traversing s to replace x with '#'
        while (s.find (x) != -1) {

            s.replace (s.find (x), len, "#");
        }

        cout << s << endl;
    }
    
    return 0;
}