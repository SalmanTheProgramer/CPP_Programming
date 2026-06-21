#include <bits/stdc++.h>    // Problem NO. 04: Sort It
using namespace std;

class Student { // definning class to set Students info.

    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;

        // defing constructor to calculate total_marks
        void sum () {

            total_marks = math_marks + eng_marks;
        }
};

bool cmp (Student a, Student b) {   // method to compare left and right elements

    if (a.total_marks > b.total_marks) return true;
    else if (a.total_marks < b.total_marks) return false;
    else return a.id < b.id;    // if marks same, id will be in ascending order
}

int main() {
    
    int n;
    cin >> n;

    Student arr[n];

    // input
    for (int i=0; i<n; i++) {

        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;

        // call of constructor
        arr[i].sum ();
    }

    // sorting the Students info.according to total_marks
    sort (arr, arr+n, cmp);

    // output
    for (int i=0; i<n; i++) {

        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }
    
    return 0;
}