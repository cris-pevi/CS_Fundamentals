#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> nums;

    // Extraer todos los números
    for (int i = 0; i < s.length(); i += 2) {
        nums.push_back(s[i] - '0');
    }

    // Ordenamos
    sort(nums.begin(), nums.end());

    // Imprimir con formato
    for (int i = 0; i < nums.size();  i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << "+";
    }

    cout << endl;

    return 0;
}
