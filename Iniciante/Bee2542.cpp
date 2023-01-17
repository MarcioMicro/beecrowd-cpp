#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int N, M, L, cM, cL, A;

    while (cin >> N >> M >> L) {
        int aM[M][N], aL[L][N];
        for (int i=0; i<M; i++) {
            for (int j=0; j<N; j++) cin >> aM[i][j];
        }
        for (int i=0; i<L; i++) {
            for (int j=0; j<N; j++) cin >> aL[i][j];
        }
        cin >> cM >> cL >> A;
        if (aM[cM-1][A-1] > aL[cL-1][A-1]) cout << "Marcos\n";
        else if (aM[cM-1][A-1] < aL[cL-1][A-1]) cout << "Leonardo\n";
        else cout << "Empate\n";
    }

    return 0;
}
