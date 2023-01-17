#include<iostream>

using namespace std;

int main() {

    int N, cont;
    string linha;
    cin >> N;
    cin.get();

    while (N) {
        getline(cin, linha);
        cont = 0;
        for (char i='a'; i<='z'; i++) {
            if (linha.find(i)<linha.length()) cont++;
        }
        if (cont == 26) cout << "frase completa\n";
        else if (cont >= 13) cout << "frase quase completa\n";
        else cout << "frase mal elaborada\n";

        N--;
    }

    return 0;
}
