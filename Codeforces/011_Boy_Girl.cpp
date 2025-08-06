#include <bits/stdc++.h>
using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> distinct_letters;

    for (char c : username) {
        distinct_letters.insert(c);
    }

    if (distinct_letters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
