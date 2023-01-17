#include <iostream>

using namespace std;

int main() {

    int C, N;
    string texto;
    bool maiusculo = false;
    while (cin >> C >> N) {
        string cifra1, cifra2;
        getline(cin,cifra1);
        getline(cin, cifra1);
        getline(cin,cifra2);
        int dif[C];
        for (int i=0; i<C; i++) dif[i] = cifra1[i] - cifra2[i];

        for (int i=0; i<N; i++) {
            getline(cin, texto);

            for (int j=0; j<texto.length(); j++) {
                if (texto[j]>='A' && texto[j]<='Z') maiusculo = true;
                for (int tamCifra=0; tamCifra<C; tamCifra++) {
                    if (toupper(texto[j]) == toupper(cifra1[tamCifra])) {
                        texto[j] = toupper(texto[j]);
                        texto[j] -= dif[tamCifra];
                    }
                    else if (toupper(texto[j]) == toupper(cifra2[tamCifra])) {
                        texto[j] = toupper(texto[j]);
                        texto[j] += dif[tamCifra];
                    }
                    if (!maiusculo) texto[j] = tolower(texto[j]);
                }
                maiusculo = false;
            }
            cout << texto << endl;
        }
        cout << endl;
    }

    return 0;
}
