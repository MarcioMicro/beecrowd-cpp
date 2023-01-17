#include <iostream>

using namespace std;

int main() {

    int N, i, j, caso=0, tam, indice;
    string plural;

    while (cin >> N) {

        tam = 1;
        for (i=0; i<=N; i++) tam += i;
        int sequencia[tam];
        sequencia[0] = 0;
        caso++;
        indice=1;
        if (tam>1) plural = "s";
        else plural = "";

        for (i=1; i<=N; i++) {
            for (j=1; j<=i; j++) {
                sequencia[indice] = i;
                indice++;
            }

        }

        cout << "Caso " << caso << ": " << tam << " numero" << plural << "\n";
        for (i=0; i<tam; i++) {
            cout << sequencia[i];
            if (i<tam-1) cout << " ";
            else cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
