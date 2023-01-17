#include <iostream>
#include <cmath>

using namespace std;

bool testeprimo(int n) {
    if (n==1) return 0;
    if (n==2) return 1;
    for (int i=2; i<=n/2; i++) {
        if (n%i==0) return 0;
    }
    return 1;
}

int main() {

    int M, N, soma, indice, cont;
    setlocale(LC_ALL, "portuguese");

    while (cin >> M) {
        int V[M];
        soma = cont = 0;
        for (int i=0; i<M; i++) cin >> V[i];
        cin >> N;

        indice = M-1;

        while (indice >= 0) {
            soma += V[indice];
            cont++;
            indice = M-1 - N*cont;
        }
        if (testeprimo(soma) == 0) cout << "Bad boy! I’ll hit you.\n";
        else cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
    }

    return 0;
}
