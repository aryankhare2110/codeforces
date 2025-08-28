#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
#include <iomanip>
#include <numeric>
using namespace std;


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (gcd(a[i], a[j]) <= 2) {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            } 
        }
        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}