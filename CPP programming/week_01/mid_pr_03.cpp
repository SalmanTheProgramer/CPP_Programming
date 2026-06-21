#include <bits/stdc++.h>
using namespace std;

int main() {
    
    char s[100001];

    while (cin.getline (s, 100001)) {   // input untill EOF

        int len = strlen (s);

        int k = 0;

        // removing white spaces
        for (int i=0; i<len; i++) {

            if (s[i] != ' ') {

                s[k++] = s[i];
            }
        }

        s[k] = '\0';    // end of string

        // sorting ascending order
        sort (s, s+k);

        // output
        cout << s << endl;
    }
    
    return 0;
}