#include <iostream>

using namespace std;

int main() {

    int QT, n1, n2;
    string nome1, nome2, pi1, pi2, resultado;

    cin >> QT;

    for (int i=0; i<QT; i++) {
        cin >> nome1 >> pi1 >> nome2 >> pi2 >> n1 >> n2;
        if ((n1 + n2)%2 == 0) resultado = "PAR";
        else  resultado = "IMPAR";

        if (pi1 == resultado) cout << nome1 << endl;
        else  cout << nome2 << endl;
    }

    return 0;
}
