#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        int neg = 0, pos = 0;
        int op = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                pos++;
            }
            else {
                neg++;
            }
        }
        bool good = false;
        while (true) {
            if ((pos >= neg) && (neg % 2 == 0)) {
                break;
            }
            if (neg % 2 != 0) {
                neg--;
                pos++;
                op++;
            }
            if (neg > pos) {
                neg -= 2;
                pos += 2;
                op += 2;
            }
        }
        cout << op << endl;
    }
}