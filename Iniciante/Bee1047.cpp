#include <iostream>

using namespace std;

int main() {

    int hi, mi, hf, mf, dh, dm;

    cin >> hi >> mi >> hf >> mf;

    if (hi == hf and mi == mf) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    } else {
        dm = (mf - mi + 60) % 60;
        if (mf >= mi) {
        dh = (hf - hi + 24) % 24;
        } else {
        dh = (hf - hi - 1 + 24) % 24;
        }

        cout << "O JOGO DUROU " << dh << " HORA(S) E " << dm << " MINUTO(S)" << endl;
    }

    return 0;
}
