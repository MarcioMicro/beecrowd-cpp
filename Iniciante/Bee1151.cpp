#include <iostream>

using namespace std;

int main() {

    int N, X=0, Y=1;
    cin >> N;

    cout << 0;

    for (int i=0; i<N-1; i++) {
        cout << " " << Y;
        Y = X + Y;
        X = Y - X;
    }

    cout << "\n";

    return 0;
}
