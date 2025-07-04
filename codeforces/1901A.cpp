#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, x;
        int maxDist = 0;
        cin >> n >> x;
        vector <int> pump(n+2);
        
        for (int j = 0; j < n+2; j++) {
            if (j == 0) {
                pump[j] = 0;
            }
            else if (j == n+1) {
                pump[j] = x;
            }
            else {
                cin >> pump[j];
            }
        }

        for (int j = 0; j < n+1; j++) {
            if (j != n) {
                if ((pump[j+1] - pump[j]) >= maxDist) {
                    maxDist = (pump[j+1] - pump[j]);
                }
            }
            else {
                if (2*(pump[j+1] - pump[j]) >= maxDist) {
                    maxDist = 2*(pump[j+1] - pump[j]);
                }
            }
        }
        cout << maxDist << "\n";
    }
    return 0;
}