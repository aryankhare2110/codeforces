#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, x;
        cin >> n >> k >> x;
        if (k == 1) {
            if (x == 1) {
                cout << "NO" << endl;
            }
        }
        else if (k == 2) {
            if (x == 2) {
                cout << "YES" << endl;
                cout << n << endl;
                for (int j = 0; j < n; j++) {
                    cout << "1" << " ";
                }
                cout << endl;
            }
            else if (n%2 == 0) {
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for (int j = 0; j < n/2; j++) {
                        cout << "2" << " ";
                    }
                    cout << endl;
            }
            else {
                    cout << "NO" << endl;
            }
        }
        else {
            if (x != 1) {
                cout << "YES" << endl;
                cout << n << endl;
                for (int j = 0; j < n; j++) {
                    cout << "1" << " ";
                }
                cout << endl;
            }
            else {
                if (n%2 == 0) {
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for (int j = 0; j < n/2; j++) {
                        cout << "2" << " ";
                    }
                    cout << endl;
                }
                else if (n == 1) {
                    cout << "NO" << endl;
                }
                else {
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for (int j = 0; j < (n/2)-1; j++) {
                        cout << "2" << " ";
                    }
                    cout << "3" << endl;
                }
            }
        }
    }
}
