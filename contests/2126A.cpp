#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        int s = 100;
        while (x > 0) {
            int d = x % 10;
            s = min(s, d);
            x /= 10;                 
        }
        cout << s << endl;
    }
}