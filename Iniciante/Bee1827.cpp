#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, i, j, metade;

    while (cin >> N) {
        int matrix[N][N];
        for (i=0; i<N; i++) {
            for (j=0; j<N; j++) {
                if (i == j) matrix[i][j] = 2;
                else matrix[i][j] = 0;
                if (j == N-i-1) matrix[i][j] = 3;
            }
        }

        for (i=N/3; i<N-N/3; i++) {
            for (j=N/3; j<N-N/3; j++) {
                if (i == N/2 && j == N/2) matrix[i][j] = 4;
                else matrix[i][j] = 1;
            }
        }


        for (i=0; i<N; i++) {
            for (j=0; j<N; j++) {
                cout << matrix[i][j];
            }
            cout << endl;
        }
        cout << endl;

    }

    return 0;
}
