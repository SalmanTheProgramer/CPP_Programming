#include <bits/stdc++.h>    // Problem NO. 04: Who is it ?
using namespace std;

// defing class
class Student {

    public:

        int id;
        char name[101];
        char sec;
        int mark;
};


int main() {
    
    int t;
    cin >> t;

    // executing against test cases
    while (t--) {

        Student a, b, c;

        // 1st input
        cin >> a.id >> a.name >> a.sec >> a.mark;

        cin.ignore ();

        // 2nd input
        cin >> b.id >> b.name >> b.sec >> b.mark;

        cin.ignore ();

        // 3rd input
        cin >> c.id >> c.name >> c.sec >> c.mark;

        Student max = a;

        // compare with b
        if (b.mark > max.mark) {

            max = b;

        }else if (b.mark == max.mark && b.id < max.id) {

            max = b;
        }

        // compare with c
        if (c.mark > max.mark) {

            max = c;
        
        }else if (c.mark == max.mark && c.id < max.id) {

            max = c;
        }

        // output
        cout << max.id << " " << max.name << " " << max.sec << " " << max.mark << endl;

    }
    
    return 0;
}