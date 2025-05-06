#include <iostream>
#include <climits>

using namespace std;

int main() {

    int L, C, tipo1, tipo2;

    cin >> L >> C;

    tipo1 = L * C + (L - 1) * (C - 1);
    tipo2 = (L - 1) * 2 + (C - 1) * 2;

    cout << tipo1 << endl << tipo2 << endl;

    return 0;
}
