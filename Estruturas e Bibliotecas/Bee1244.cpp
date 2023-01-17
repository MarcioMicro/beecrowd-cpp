#include<iostream>
#include<sstream>
#include<algorithm>
#include<map>

using namespace std;

typedef struct {
    int indice;
    string palavra;
} Estrutura;

bool ordena(Estrutura &a, Estrutura &b) {
    if (a.palavra.size() == b.palavra.size()) return a.indice < b.indice;
    else return a.palavra.size() > b.palavra.size();
}

int main() {

    int N, cont;
    string linha, palavratemp;
    bool primeira;
    Estrutura palavras[50];

    cin >> N;
    cin.get();

    while (N--) {
        getline(cin, linha);
        cont = 0;
        primeira = true;

        stringstream ss(linha);
        while (ss >> palavras[cont].palavra) {
            palavras[cont].indice = cont;
            cont++;
        }

        sort (&palavras[0], &palavras[cont], ordena);

        for (int i=0; i<cont; i++) {
            if (primeira) primeira = !primeira;
            else cout << " ";
            cout << palavras[i].palavra;
        }
        cout << endl;
    }

    return 0;
}
