#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    double result = (double)n * k / a;

    if (floor(result) != result) {
        cout << "double" << endl;
    }
    else {
        long long intResult = n * k / a;
        if (intResult >= INT_MIN && intResult <= INT_MAX) {
            cout << "int" << endl;
        } else {
            cout << "long long" << endl;
        }
    }

    return 0;
}