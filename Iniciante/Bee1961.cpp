#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int P, N, cano, canoAnt;
    bool win=1;
    cin >> P >> N;

    for (int i=0; i<N; i++) {
        cin >> cano;
        if (i==0) canoAnt = cano;
        else {
            if (abs(canoAnt - cano) > P) win = 0;
            canoAnt = cano;
        }
    }
    if (win == 1) cout << "YOU WIN\n";
    else cout << "GAME OVER\n";

    return 0;
}
