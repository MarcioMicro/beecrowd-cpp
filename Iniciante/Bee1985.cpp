#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, p, q;
    double valor, total=0;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> p >> q;
        switch(p) {
            case 1001: valor = 1.50; break;
            case 1002: valor = 2.50; break;
            case 1003: valor = 3.50; break;
            case 1004: valor = 4.50; break;
            case 1005: valor = 5.50; break;
        }
        total += valor*q;
    }

    cout << fixed << setprecision(2) << total << "\n";

    return 0;
}
