#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    if (!(cin >> n >> s)) return 0;

    int removals = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) ++removals;
    }
    cout << removals << '\n';
    return 0;
}

