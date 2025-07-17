#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector <int> a(n);
        int minDiff = INT_MAX;
        int x = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        if (!is_sorted(a.begin(), a.end())) {
            cout << "0" << endl;
            continue;
        }
        else {
            int f = 0;
            for (int j = 1; j < n; j++) {
                if (a[j] == a[j-1]) {
                    cout << "1" << endl;
                    f = 1;
                    break;
                }
                int curDiff = a[j] - a[j-1];
                if (curDiff < minDiff) {
                    minDiff = curDiff;
                }
            }
            if (f == 0) {
                cout << (minDiff / 2) + 1 << endl;
            }
        }
    }
}
