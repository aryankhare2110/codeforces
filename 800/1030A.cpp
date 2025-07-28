#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector <int> a(n);
    int f = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            cout << "HARD" << endl;
            f = 1;
            break;
        }
    }
    if (f == 0) {
        cout << "EASY" << endl;
    }
}   