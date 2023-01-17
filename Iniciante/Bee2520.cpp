#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, M, Ai, Aj, Ji, Jj;
    while (cin >> N >> M) {
        int cidade[N][M];
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                cin >> cidade[i][j];
                if (cidade[i][j] == 1) {
                    Ji = i;
                    Jj = j;
                }
                else if (cidade[i][j] == 2) {
                    Ai = i;
                    Aj = j;
                }
            }
        }
        cout << abs(Ji-Ai) + abs(Jj-Aj) << endl;
    }

    return 0;
}
