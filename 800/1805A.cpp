#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        cin >> a[0];
        int xr = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            xr = xr ^ a[i];
        }
        if (n % 2 != 0) {
            cout << xr << endl;
        }
        else if ((xr == 0) && (n % 2 == 0)) {
            cout << xr << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
}