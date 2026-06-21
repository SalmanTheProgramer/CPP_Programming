#include <bits/stdc++.h>    // Problem NO. 03: Reverse It
using namespace std;

class Student { // defining class to set Students info.

    public:
        string nm;
        int cls;
        char s;
        int id;
};

int main() {
    
    int n;
    cin >> n;

    Student arr[n];
    for (int i=0; i<n; i++) {

        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    // loop to swap left scetions with right sections
    for (int i=0; i<n/2; i++) {

        swap (arr[i].s, arr[n - 1 - i].s);  // 2 pointers tech: right elements eqn = n - 1 - i
    }

    // output
    for (int i=0; i<n; i++) {

        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }
    
    return 0;
}