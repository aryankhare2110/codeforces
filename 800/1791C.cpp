#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int i = 0;
        int j = n-1;
        int length = n;
        
        while (i < j) {
            if ((s[i] == '0') && (s[j] == '1')) {
                length -= 2;
                i++;
                j--;
            }
            else if ((s[i] == '1') && (s[j] == '0')) {
                length -= 2;
                i++;
                j--;
            }
            else {
                break;
            }
        }
        
        cout << length << endl;
    }
}