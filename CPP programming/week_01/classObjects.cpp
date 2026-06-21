#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    char name[100];
    int roll;
    double cgpa;
};


int main () {

    Student a, b;   // objects of the class
    
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;

    cin.ignore(); // to clear leftover new line

    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;    

    

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;

    return 0;
}