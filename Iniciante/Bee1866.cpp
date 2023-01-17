#include <iostream>

using namespace std;

int main() {

    int N, C;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> C;
        if (C%2 == 0) cout << 0 << endl;
        else cout << 1 << endl;
    }

    return 0;
}
