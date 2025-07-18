#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector <int> a(n-1);
        int sum = 0;
        for (int j = 0; j < n-1; j++) {
            cin >> a[j];
            sum += a[j];
        }
        sum = -sum;
        cout << sum << endl;
    }
    return 0;
}
