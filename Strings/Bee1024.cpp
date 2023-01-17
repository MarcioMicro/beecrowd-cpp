#include<iostream>
#include<sstream>

using namespace std;

int main() {

    int N, tam;
    string linha, invert;
    cin >> N;
    cin.get();

    while (N) {
        getline(cin, linha);
        tam = linha.length();
        invert = "";
        for (int i=0; i<tam; i++) {
            if (linha[i]>='A' && linha[i]<='Z' || linha[i]>='a' && linha[i]<='z') {
                linha[i] += 3;
            }
        }

        for (int i=tam-1; i>=0; i--) {
            invert += linha[i];
        }

        for (int i=tam/2; i<tam; i++) {
            invert[i] -= 1;
        }

        cout << invert << endl;

        N--;
    }

	return 0;
}
