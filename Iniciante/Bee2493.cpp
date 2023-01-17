#include <iostream>
#include <string>

using namespace std;

int main() {

    int T;

    while (cin >> T) {
        int X[T], Y[T], Z[T], E, erros, iY, iZ;
        char R, rCerta[T];
        string jogador, expressao[T], fora[T], stY, stZ, teste;

        for (int i=0; i<T; i++) {
            cin >> X[i] >> expressao[i];
            stY = stZ = "";
            iY = iZ = 0;
            while (expressao[i][iY] != '=') {
                stY += expressao[i][iY];
                iY++;
            }

            iY++;
            while (expressao[i][iY] != '\0') {
                stZ += expressao[i][iY];
                iY++;
                iZ++;
            }

            Y[i] = stoi(stY);
            Z[i] = stoi(stZ);
            if (Z[i] == X[i]+Y[i]) rCerta[i] = '+';
            else if (Z[i] == X[i]-Y[i]) rCerta[i] = '-';
            else if (Z[i] == X[i]*Y[i]) rCerta[i] = '*';
            else rCerta[i] = 'I';
        }

        erros = 0;
        for (int i=0; i<T; i++) {
            cin >> jogador >> E >> R;
            if (R != rCerta[E-1]) {
                fora[erros] = jogador;
                erros++;
            }
        }

        if (erros == 0) cout << "You Shall All Pass!";
        else if (erros == T) cout << "None Shall Pass!";
        else {
            for (int i=0; i<erros-1; i++) {
                for (int j=0; j<erros-1; j++) {
                    if (fora[j] > fora[j+1]) swap(fora[j],fora[j+1]);
                }
            }
            for (int i=0; i<erros; i++) {
                if (i==0) cout << fora[i];
                else cout << " " << fora[i];
            }
        }
        cout << endl;

    }

    return 0;
}
