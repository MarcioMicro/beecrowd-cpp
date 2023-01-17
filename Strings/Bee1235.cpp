#include<iostream>

using namespace std;

int main() {

    int N, tam;
    string linha, decif;
    cin >> N;
    cin.get();

    while (N) {
        getline(cin, linha);
        tam = linha.length();
        decif = "";
        for (int i=tam/2-1; i>=0; i--) {
            decif += linha[i];
        }
        for (int i=tam-1; i>=tam/2; i--) {
            decif += linha[i];
        }
        cout << decif << endl;
        N--;
    }

    return 0;
}
