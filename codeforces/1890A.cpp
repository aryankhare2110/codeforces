#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector <int> a(n);
        unordered_map <int, int> map;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            map[a[j]]++;
        }
        if (map.size() > 2) {
            cout << "NO" << endl;
        }
        else if (map.size() == 1) {
            cout << "YES" << endl;
        }
        else {
            int x1 = 0, x2 = 0;
            for (pair <int, int> p2 : map) {
                if (x1 != 0) {
                    x2 = p2.second;
                }
                else {
                    x1 = p2.second;
                }
            }
            if (n%2 == 0) {
                if (x1 == x2) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
            else {
                if ((x1 > x2) && (x1 == x2 + 1)) {
                    cout << "YES" << endl;
                }
                else if ((x2 > x1) && (x2 == x1 + 1)){
                    cout << "YES" << endl;
                }
                else  {
                    cout << "NO" << endl;
                }
            }
        }
    }
}
