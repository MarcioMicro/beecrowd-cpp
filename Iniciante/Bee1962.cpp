#include <iostream>

using namespace std;

int main() {

    int N, T;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> T;
        if (T<2015) cout << 2015 - T << " D.C.\n";
        else cout << T - 2014 << " A.C.\n";
    }

    return 0;
}
