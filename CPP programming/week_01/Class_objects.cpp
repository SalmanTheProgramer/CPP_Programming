#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    double cgpa;
};

int main() {
    Student a, b;

    // Input for student a
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    
    //cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear buffer
    cin.ignore();

    // Input for student b
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    // Output
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}
