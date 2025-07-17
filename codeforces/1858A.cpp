#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        vector <int> a(3);
        for (int j = 0; j < 3; j++) {
            cin >> a[j];
        }

        int anna_moves = a[0] + (a[2] + 1) / 2;
        int katie_moves = a[1] + a[2] / 2;

        if (anna_moves > katie_moves) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
}
