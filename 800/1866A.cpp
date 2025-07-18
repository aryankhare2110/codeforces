#include <bits/stdc++.h> 
using namespace std;

int main () {
    int n;
    cin >> n;
    vector <int> a(n);

    for (int j = 0; j < n; j++) {
        cin >> a[j];
        a[j] = abs(a[j]);
    }

    sort (a.begin(), a.end());
    cout << a[0] << endl;
}