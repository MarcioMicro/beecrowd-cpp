#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        if (i < N-1) cout << "Ho ";
        else cout << "Ho";
    }
    cout << "!\n";

    return 0;
}
