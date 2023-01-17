#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int T, teste, tamanho;
    cin >> T;

    while (T!=0) {
        int M[T][T];
        for (int i=0; i<T; i++) {
            for (int j=0; j<T; j++) {
                M[i][j] = pow(2 , i+j);
            }
        }

        teste = M[T-1][T-1];
        tamanho = 0;
        while (teste > 0) {
            teste /= 10;
            tamanho++;
        }

        for (int i=0; i<T; i++) {
            for (int j=0; j<T; j++) {
                cout << setfill(' ') << setw(tamanho) << M[i][j];
                if (j < T-1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        cin >> T;
    }

    return 0;
}
