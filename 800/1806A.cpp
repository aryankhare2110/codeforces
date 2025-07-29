#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((a == c) && (b == d)) {
            cout << "0" << endl;
            continue;
        }
        else if (d < b) {
            cout << "-1" << endl;
            continue;
        }
        else if ((d-b)-(c-a) < 0) {
            cout << "-1" << endl;
            continue;
        }
        else {
            int s = 0;
            while (b != d) {
                b++;
                a++;
                s++;
            }
            while (a != c) {
                a--;
                s++;
            }
            cout << s << endl;
            continue;
        }
    }
}