#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int k = -1;
        for (int i = 0; i < n; i++) {
            int p = 0;
            int s = 0;
            for (int j = 0; j < i; j++) {
                if (a[j] == 2) {
                    p++;
                }
            }
            for (int j = i; j < n; j++) {
                if (a[j] == 2) {
                    s++;
                }
            }
            if (p == s) {
                k = i;
                break;
            }
        }
        if (k == 0) {
            k ++;
        }
        cout << k << endl;
    }
}