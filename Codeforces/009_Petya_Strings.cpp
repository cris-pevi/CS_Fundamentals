#include <bits/stdc++.h>
using namespace std;

int main() {
    string string_1, string_2;
    cin >> string_1 >> string_2;

    // Convertimos de mayúscula a minúscula
    for (int i = 0; i < string_1.length(); i++) {
        string_1[i] = tolower(string_1[i]);
        string_2[i] = tolower(string_2[i]);
    }

    // Comparamos lexicograficamente
    if (string_1 < string_2) {
        cout << -1 << endl;
    } else if (string_1 > string_2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
