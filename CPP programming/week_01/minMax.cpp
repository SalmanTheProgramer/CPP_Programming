#include <iostream>
#include <algorithm>
using namespace std;

int main () {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int m = min (a, b);
    int n = max (a, b);

    cout << m << " " << n << endl;

    int mn = min ({a, b, c, d});
    int mx = max ({a, b, c, d});

    cout << mn << " " << mx << endl;

    return 0;
}