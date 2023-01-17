#include <iostream>

using namespace std;

int main() {

    int N, M, sabre=0, posN=0, posM=0;
    cin >> N >> M;
    int valor[N][M];

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++)
            cin >> valor[i][j];
    }

    for (int i=1; i<N-1; i++) {
        for (int j=1; j<M-1; j++) {
            if (valor[i][j] == 42) {
                sabre = 0;
                for (int x=i-1; x<=i+1; x++) {
                    for (int y=j-1; y<=j+1; y++) {
                        if (valor[x][y] != 7) sabre++;
                    }
                }
                if (sabre < 2) {
                    posN = i+1;
                    posM = j+1;
                }
            }
        }
    }
    cout << posN << " " << posM << "\n";

    return 0;
}
