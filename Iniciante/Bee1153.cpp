#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;
    int cont=N;

    for (int i=1; i<N-1; i++) {
        cont *= (N-i);
    }

    cout << cont << "\n";

    return 0;
}
