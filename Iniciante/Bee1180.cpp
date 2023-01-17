#include <iostream>

using namespace std;

int main() {

    int N, p, menor;
    cin >> N;
    int X[N];

    for (int i=0; i<N; i++) {
        cin >> X[i];
        if (i==0 || X[i] < menor) {
            p = i;
            menor = X[i];
        }

    }

    cout << "Menor valor: " << X[p] << "\nPosicao: " << p << "\n";

    return 0;
}
