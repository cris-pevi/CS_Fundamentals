#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long filas     = (n + a - 1)/a;    // ceil(n/a)
    long long columnas  = (m + a - 1)/a;    // ceil(m/a)

    cout << filas * columnas << endl;
   
   return 0;
}
