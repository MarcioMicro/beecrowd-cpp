#include<iostream>
#include<sstream>

using namespace std;

int main() {

    string linha, palavra, maiorPalavra;
    int maiorTam=0, tam;
    bool primeiro;
    getline(cin, linha);

    while (linha != "0") {
        stringstream ss(linha);
        primeiro = true;
        while (ss >> palavra) {
            if (primeiro) primeiro = false;
            else cout << "-";
            tam = palavra.length();
            if(tam >= maiorTam) {
                maiorTam = tam;
                maiorPalavra = palavra;
            }
            cout << tam;
        }
        cout << endl;
        getline(cin, linha);
    }

    cout << endl << "The biggest word: " << maiorPalavra << endl;

    return 0;
}
