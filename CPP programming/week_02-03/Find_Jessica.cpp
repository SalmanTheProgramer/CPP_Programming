#include <bits/stdc++.h>    // Problem NO. 02: Find Jessica
using namespace std;

int main() {
    
    string s, x = "Jessica";
    getline (cin, s);

    stringstream ss (s);    // taking stream to extract "Jessica"

    // setting variables to compare
    bool found = false;
    string temp;

    // traversing s insearch of "Jessica"
    while (ss >> temp) {

        if (temp == x) {

            found = true;
            break;
        }        
    }

    // output
    if (!found) cout << "NO";
    else cout << "YES";
    
    return 0;
}