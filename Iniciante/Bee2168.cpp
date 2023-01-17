#include <iostream>

using namespace std;

int main() {

    int N, soma;
    cin >> N;
    int cameras[N+1][N+1];
    char quadras[N][N];

    for (int i=0; i<=N; i++) {
        for (int j=0; j<=N; j++) cin >> cameras[i][j];
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            soma = 0;
            for (int x=i; x<=i+1; x++) {
                for (int y=j; y<=j+1; y++) {
                    soma += cameras[x][y];
                }
            }
            if (soma>1) quadras[i][j] = 'S';
            else quadras[i][j] = 'U';
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << quadras[i][j];
        }
        cout << endl;
    }

    return 0;
}
