#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, nAlunos, nSecreto, chute, indice, dif, difAnt;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> nAlunos >> nSecreto;
        indice = 0;
        for (int j=0; j<nAlunos; j++) {
            cin >> chute;
            dif = abs(chute - nSecreto);
            if (j==0) difAnt = dif;
            else {
                if (dif < difAnt) {
                    indice = j;
                    difAnt = dif;
                }
            }

        }

        cout << indice + 1 << endl;

    }

    return 0;
}
