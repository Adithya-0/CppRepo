#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}

void solve() {
    int n{};
    cin >> n;

    string str1{};
    cin >> str1;
    string str2{};
    cin >> str2;

    bool possible = false;
    int no_of_1s = 0;
    int no_of0s = 0;

    for (int i = 0; i < n; i++) {
        if (str1[i] == '0') {
            no_of0s++;
        } else {
            no_of_1s++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == n - 1 && ((str2[i] == '0' && no_of_1s >= 2) || (str2[i] == '1' && no_of0s >= 2))) {
            possible = true;
        }

        if (str1[i] == '1' && str2[i] == '0') {
            if (no_of_1s >= 2) {
                no_of_1s -= 2;
            }
        } else if (str1[i] == '0' && str2[i] == '1') {
            if (no_of0s >= 2) {
                no_of0s -= 2;
            }
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
