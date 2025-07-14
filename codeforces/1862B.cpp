#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector <int> b(n);
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }
        vector <int> a;
        a.push_back(b[0]);
        for (int j = 1; j < n; j++) {
            if (b[j-1] > b[j]) {
                a.push_back(1);
            }
            a.push_back(b[j]);
        }
        cout << a.size() << endl;
        for (int j = 0; j < a.size(); j++) {
            cout << a[j] << " ";
        }
        cout << endl;       
    }
}