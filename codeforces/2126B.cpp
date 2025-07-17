#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        vector <int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        int finalHike = 0;
        for (int j = 0; j < n; j++) {
            int hike = 0;
            if (a[j] == 0) {
                if (j + k <= n) {
                    for (int l = j; l < j + k; l++) {
                        if (a[l] == 0) {
                            hike++;
                        }
                    }
                    if (hike == k) {
                        finalHike++;
                        j += k;
                    }
                }
            }
        }
        cout << finalHike << endl;
    }
}