#include<iostream>
#include<map>
#include<sstream>

using namespace std;

int main() {
    //    nome     RG
    map <string, int> mapaPalavras;
    map <string, int>::iterator it;

    string palavra, linha, teste;
    int M, N, valor, contPontos, soma;
    cin >> M >> N;

    while (M) {
        cin >> palavra >> valor;
        mapaPalavras[palavra] = valor;

        M--;
    }
    cin.get();

    while (N) {
        soma = 0;
        while (linha!=".") {
            getline(cin, linha);
            stringstream ss(linha);
            while (ss >> teste) {
                if (mapaPalavras.find(teste) != mapaPalavras.end()) {
                    soma += mapaPalavras[teste];
                }
            }
        }
        linha = "";
        cout << soma << endl;

        N--;
    }

	return 0;
}
