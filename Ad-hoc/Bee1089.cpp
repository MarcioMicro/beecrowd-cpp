#include <iostream>

using namespace std;

int main() {

    int N, primeiroValor, valorAnt, valor, qtd;
    bool sobe, primeiroSobe;
    cin >> N;

    while (N > 0) {
        cin >> primeiroValor >> valorAnt;
        if (primeiroValor < valorAnt) sobe = true;
        else sobe = false;
        primeiroSobe = sobe;
        qtd = 1;
        for (int i=2; i<N; i++) {
            cin >> valor;
            if (valorAnt < valor && sobe == false || valorAnt > valor && sobe == true) {
                qtd++;
                sobe = !sobe;
            }
            valorAnt = valor;
        }
        if (primeiroSobe == sobe) {
                qtd++;
        }
        //if (sobe == primeiroSobe) qtd++;
        if (qtd < 2) qtd = 2;

        cout << qtd << endl;
        cin >> N;

    }


    return 0;
}
