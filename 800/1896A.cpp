#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector <int> p(n);
        int f = 0;

        for (int j = 0; j < n; j++) {
            cin >> p[j];
        }
        
        bool changed = true;
        while (changed) {
            changed = false;
            for (int j = 1; j < n - 1; j++) {
                if (p[j - 1] < p[j] && p[j] > p[j + 1]) {
                    swap(p[j], p[j + 1]);
                    changed = true;
                }
            }
        }

        if (is_sorted(p.begin(), p.end())) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }

    }
}
