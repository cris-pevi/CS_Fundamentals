#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string instruction;

    while(n--) {
        cin >> instruction;

        if (instruction.find("++") != string::npos) {
            x++;
        }
        else {
            x--;
        }
    }

    cout << x << endl;
    
    return 0;
}
