#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        vector <int> b(n);
        int m = n+1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = m - a[i];
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}