#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >>t;

    for (int i = 0; i < t; i++) {

        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int n = a;
        int cost1 = 0;
        int cost2 = 0;

        if (a < b) {
            while (a != b) {
                if (a % 2 == 0) {
                    a++;
                    cost1 += y;
                }
                else {
                    a++;
                    cost1 += x;
                }
            }

            while (n != b) {
                n++;
                cost2 += x;
            }

            if (cost1 < cost2) {
                cout << cost1 << endl;
            }
            else {
                cout << cost2 << endl;
            }
        }

        else if (a == b) {
            cout << "0" << endl;
        }

        else {
            if ((a == b+1) && (a%2 != 0)) {
                cout << y << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }
}