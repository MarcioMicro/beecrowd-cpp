#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    int N, v, soma;

    while (cin >> N) {
        soma = 0;
        for (int i=0; i<N; i++) {
            cin >> v;
            soma += v;
        }
        if (soma >= N*(2.0/3)) cout << "impeachment" << endl;
        else cout << "acusacao arquivada" << endl;

    }

    return 0;
}
