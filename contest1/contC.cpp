#include <bits/stdc++.h>
using namespace std;

int main() {
    char C;
    cin >> C;
    char nextChar = (C == 'z') ? 'a' : static_cast<char>(C + 1);
    cout << nextChar << endl;
    return 0;
}
