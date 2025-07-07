#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        
        int f = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == k) {
                f = 1;
            }
        }
        
        if (f == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
