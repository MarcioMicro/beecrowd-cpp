#include <iostream>

using namespace std;

int main() {

    int N, in=0, out=0;

    cin >> N;

    int X[N];

    for (int i=0; i<N; i++) cin >> X[i];

    for (int i=0; i<N; i++) {
        if (X[i] >= 10 and X[i] <= 20) in++;
        else out++;
    }
    cout << in << " in\n" << out << " out\n";

}
