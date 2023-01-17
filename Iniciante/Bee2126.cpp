#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    string n1, n2, comparador;
    int tam, indice, qtd, ultima, contador = 1;

    while (getline(cin, n1)) {
        getline(cin, n2);

        tam = n1.length();
        indice = 0;
        qtd = 0;

        while (indice < n2.length()) {

            comparador = n2.substr(indice++, tam);

            if (!comparador.compare(n1)) {
                qtd++;
                ultima = indice;
            }
        }

        cout << "Caso #" << contador++ << ":" << endl;

        if (qtd) {
            cout << "Qtd.Subsequencias: " << qtd << endl
                 << "Pos: " << ultima << endl << endl;
        }
        else
            cout << "Nao existe subsequencia" << endl << endl;
    }

    return 0;
}
