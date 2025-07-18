#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int score = 0;
        vector <string> a(10);
        for (int j = 0; j < 10; j++) {
            cin >> a[j];
            for (int k = 0; k < 10; k++) {
                if ((a[j][k] == 'X') && ((j == 0) || (j == 9))) {
                    score += 1;
                }
                else if ((a[j][k] == 'X') && ((j == 1) || (j == 8))) {
                    if ((k == 0) || (k == 9)) {
                        score += 1;
                    }
                    else {
                        score += 2;
                    }
                }
                else if ((a[j][k] == 'X') && ((j == 2) || (j == 7))) {
                    if ((k == 0) || (k == 9)) {
                        score += 1;
                    }
                    else if ((k == 1) || (k == 8)) {
                        score += 2;
                    }
                    else {
                        score += 3;
                    }
                }
                else if ((a[j][k] == 'X') && ((j == 3) || (j == 6))) {
                    if ((k == 0) || (k == 9)) {
                        score += 1;
                    }
                    else if ((k == 1) || (k == 8)) {
                        score += 2;
                    }
                    else if ((k == 2) || (k == 7)) {
                        score += 3;
                    }
                    else {
                        score += 4;
                    }
                }
                else if (a[j][k] == 'X') {
                    if ((k == 0) || (k == 9)) {
                        score += 1;
                    }
                    else if ((k == 1) || (k == 8)) {
                        score += 2;
                    }
                    else if ((k == 2) || (k == 7)) {
                        score += 3;
                    }
                    else if ((k == 3) || (k == 6)){
                        score += 4;
                    }
                    else {
                        score += 5;
                    }
                }
            }
        }
        cout << score << endl;
    }
}

// Not a clean solution. Better Solution Below

/* #include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(10);
        for (auto& row : grid) cin >> row;

        int score = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j});
                    score += ring + 1;
                }
            }
        }
        cout << score << '\n';
    }
}
*/