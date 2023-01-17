#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

    string palavra, frase, aux;
    int pos, i, qtd, caso=1, tam;

    while (getline (cin, palavra)) {
        getline (cin, frase);
        tam = palavra.length();
        qtd = 0;
        i=0;

        while (i<frase.length()) {
            aux = frase.substr(i++, tam);
            if (!aux.compare(palavra)) {
                qtd++;
                pos = i;
            }
        }

        cout << "Caso #" << caso++ << ":" << endl;

        if (qtd) {
            cout << "Qtd.Subsequencias: " << qtd << endl
                 << "Pos: " << pos << endl << endl;
        }
        else
            cout << "Nao existe subsequencia" << endl << endl;


    }

    return 0;
}
