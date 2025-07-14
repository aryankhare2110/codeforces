#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int f = 0;
        int c = 0;
        if (x.find(s) != string::npos) {
                cout << c << endl;
                continue;
        }
        while (x.length() < s.length()) {
            x = x+x;
            c++;
            if (x.find(s) != string::npos) {
                cout << c << endl;
                break;
            }
        }
        if (x.find(s) == string::npos) {
            x = x+x;
            c++;
            if (x.find(s) != string::npos) {
                cout << c << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }
}