#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    double a, b;
    cin >> a >> b;

    cout << fixed << setprecision(5) << a << endl;
    cout << fixed << setprecision(3) << b << endl;

    return 0;
}