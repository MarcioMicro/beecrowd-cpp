#include <iostream>

using namespace std;

int main() {

    int64_t N, testeN;
    int tam=0;
    cin >> N;
    testeN = N;

    while (testeN > 0) {
        testeN /= 10;
        tam++;
    }

    for (int i=0; i<tam; i++) {
        cout << N%10;
        N /= 10;
    }

    cout << endl;

    return 0;
}
