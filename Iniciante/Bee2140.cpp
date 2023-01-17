#include <iostream>

using namespace std;

int main() {

    int troco, N, M, notas[6] = {2, 5, 10, 20, 50, 100};
    bool possivel=0;
    cin >> N >> M;

    while (N!=0 && M!=0) {
        troco = M - N;
        for (int i=0; i<sizeof(notas)/sizeof(int); i++) {
            for (int j=0; j<sizeof(notas)/sizeof(int); j++) {
                if (notas[i] + notas[j] == troco) possivel = 1;
            }
        }
        if (possivel == 1) cout << "possible\n";
        else cout << "impossible\n";
        possivel = 0;
        cin >> N >> M;
    }

    return 0;
}
