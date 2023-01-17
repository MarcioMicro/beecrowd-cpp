#include <iostream>
#include <string>

using namespace std;

int main() {

    string palavra, frase, aux;
    int pos, i, j, qtd, caso=0;
    bool verif = false;

    while (cin >> palavra >> frase) {
        caso++;
        aux = "";
        qtd = 0;
        pos = 0;

        for (i=0; i<=frase.length()-palavra.length(); i++) {
            for (j=i; j<palavra.length()+i; j++) {
                aux += frase[j];
            }
            if (aux == palavra) {
                qtd++;
                pos = i;
            }
            aux = "";
        }

        cout << "Caso #" << caso << ":\n";
        if (qtd==0) cout << "Nao existe subsequencia\n\n";
        else cout << "Qtd.Subsequencias: " << qtd << "\nPos: " << pos+1 << "\n\n";
    }


    return 0;
}
