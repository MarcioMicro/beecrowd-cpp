#include <iostream>

using namespace std;

int main() {

    int qtd;

    cin >> qtd;

    int matr[qtd], indice;
    double nota[qtd], maiornota=0;

    for (int i=0; i<qtd; i++) cin >> matr[i] >> nota[i];

    for  (int i=0; i<qtd; i++) {
        if (nota[i]>maiornota) {
            indice=i;
            maiornota=nota[i];
        }
    }

    if (nota[indice] < 8.0) cout << "Minimum note not reached" <<"\n";
    else cout << matr[indice] <<"\n";

    return 0;
}
