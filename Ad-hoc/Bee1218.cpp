#include<iostream>
#include<sstream>

using namespace std;

int main() {

    int tam, cont=0, tamCaixa, iguais, fem, masc;
    string linha, valor, genero;
    bool tipo=0;

    while (cin >> tam) {
        cin.get();
        getline(cin, linha);

        stringstream S(linha);
        cont++;
        iguais = fem = masc = 0;

        while (S >> valor) {
            if (tipo == 0) {
                tamCaixa = stoi(valor);
                if (tamCaixa == tam) iguais++;
            }
            else {
                if (tamCaixa == tam && valor == "F") fem++;
                else if (tamCaixa == tam && valor == "M") masc++;
            }
            tipo = !tipo;


        }
        if (cont > 1) cout << "\n";
        cout << "Caso " << cont << ":\nPares Iguais: " << iguais;
        cout << "\nF: " << fem << "\nM: " << masc << "\n";
    }

    return 0;

}
