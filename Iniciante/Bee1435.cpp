#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    cin >> N;

    while (N!=0) {
        int matriz[N][N], incremento=0, metade;
        metade = N/2;

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                matriz[i][j] = 1;
            }
        }

        while (incremento < metade) {
            incremento++;
            for (int i=incremento; i<N-incremento; i++) {
                for (int j=incremento; j<N-incremento; j++) {
                    matriz[i][j] += 1;
                }
            }
        }
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cout << setfill(' ') << setw(3) << matriz[i][j];
                if (j<N-1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        cin >> N;

    }


    return 0;

}
