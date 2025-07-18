#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            cout << "ALICE" << endl;
        }
        else if (n % 4 == 0) {
            cout << "BOB" << endl;
        }
        else {
            cout << "ALICE" << endl;
        }
    }
}