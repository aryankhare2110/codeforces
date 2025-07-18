#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector <int> a(n);
        vector <int> b;
        vector <int> c;

        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        b.push_back(a[0]);

        for (int j = 1; j < n; j++) {
            if (a[0] % a[j] == 0) {
                b.push_back(a[j]);
            }
            else {
                c.push_back(a[j]);
            }
        }
        
        if ((c.size() != 0) && (b.size() != 0)) {
            cout << b.size() << " " << c.size() << endl;
            for (int j = 0; j < b.size(); j++) {
                cout << b[j] << " ";
            }
            cout << endl;
            for (int j = 0; j < c.size(); j++) {
                cout << c[j] << " ";
            }
            cout << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
}