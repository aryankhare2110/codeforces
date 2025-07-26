#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        vector <int> b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int f = 0;
        for (int i = 0; i < n; i++) {
            int j = 0;
            int c = 0;
            if (a[i] == 0) {
                j = i;
                while (j < n && a[j] == 0) {
                    j++;
                    i++;
                    c++;
                }
                f++;
                b.push_back(c);
            }
        }
        sort(b.begin(), b.end(), greater<int>());
        if (f == 0) {
            b.push_back(0);
        }
        cout << b[0] << endl;   
    }
}