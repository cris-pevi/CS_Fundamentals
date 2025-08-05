#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;   // Posición del 1

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            int value;
            cin >> value;

            if (value == 1) {
                x = i;
                y = j;
            }
        }
    }

    // En base a 0, el centro de (2, 2)
    int moves = abs(x-2) + abs(y-2);
    cout << moves << endl;

    return 0;
}
