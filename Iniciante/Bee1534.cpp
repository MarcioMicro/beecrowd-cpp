#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N;

    while (cin >> N) {

        int matrixN[N][N], dif=N-1;

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                matrixN[i][j] = 3;
                if (i==j) matrixN[i][j] = 1;
                if (j==N-i-1) matrixN[i][j] = 2;
                }
            }

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                cout << matrixN[i][j];
            }
            cout << endl;
        }
    }


    return 0;
}
