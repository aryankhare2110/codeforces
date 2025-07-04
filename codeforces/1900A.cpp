#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '.') {
                if (s[i + 1] == '.' && s[i+2] == '.') {
                    c = 2;
                    break; 
                }
                else {
                    c++;
                }
            }
        }
        cout << c << endl;
    }
}