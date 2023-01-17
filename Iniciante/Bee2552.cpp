#include <iostream>

using namespace std;

int main() {

    int N, M, cont;

    while (cin >> N >> M) {
        int valor[N+2][M+2];
        for (int i=0; i<N+2; i++) {
            for (int j=0; j<M+2; j++) {
                valor[i][j] = 0;
            }
        }
        for (int i=1; i<N+1; i++) {
            for (int j=1; j<M+1; j++) {
                cin >> valor[i][j];
            }
        }
        for (int i=1; i<N+1; i++) {
            for (int j=1; j<M+1; j++) {
                cont = 0;
                if (valor[i][j] == 1) cout << 9;
                else {
                    if (valor[i-1][j] == 1) cont++;
                    if (valor[i+1][j] == 1) cont++;
                    if (valor[i][j-1] == 1) cont++;
                    if (valor[i][j+1] == 1) cont++;
                    cout << cont;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
