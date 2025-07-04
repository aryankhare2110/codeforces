#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, f = 0;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (k == 1) {
            for (int i = 1; i < n; i++) {
                if (v[i - 1] > v[i]) {
                    f = 1;
                    break;
                }
            }
        }
        if (f)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
