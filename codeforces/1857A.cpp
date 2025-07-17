#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector <int> a(n);
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (j < n/2) {
                sum1 += a[j];
            }
            else {
                sum2 += a[j];
            }
        }
        if (((sum1 - sum2) % 2) == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}