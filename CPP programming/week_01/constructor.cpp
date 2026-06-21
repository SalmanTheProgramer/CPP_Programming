#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double gpa;

        // constructor
        Student (int r, int c, int g) {

            roll = r;
            cls = c;
            gpa = g;
        }
};


int main () {

    // create objects and pass the values to contructor
    Student rahim (29, 9, 5.00);
    Student karim (45, 10, 4.98);

    cout << fixed << setprecision(2); // force 2 decimal places

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}