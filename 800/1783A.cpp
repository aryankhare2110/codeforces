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

int main () {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        vector <int> b;
        

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> s(a.begin(), a.end());
        bool all_same = (s.size() == 1);

        if (all_same == true) {
            cout << "NO" << endl;
            continue;
        }

        sort(a.begin(), a.end());
        
        cout <<  "YES" << endl;
        cout << a[n-1] << " ";
        for (int i = 0; i < n-1; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}