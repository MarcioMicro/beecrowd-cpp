#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, Q, sugestoes=0, maior=0, maiorAtual=0;
    cin >> N;
    bool igual;
    string palavra[N];

    for (int i=0; i<N; i++) cin >> palavra[i];

    cin >> Q;
    string consulta[Q];

    for (int i=0; i<Q; i++) {
        cin >> consulta[i];
    }

    for (int i=0; i<Q; i++) {
        sugestoes = maior = 0;
        for (int j=0; j<N; j++) {
            igual = 1;
            maiorAtual = 0;
            for (int k=0; k<consulta[i].length(); k++) {
                if (consulta[i][k] != palavra[j][k]) {
                    igual = 0;
                }
                maiorAtual = palavra[j].length();
            }
            if (igual == 1) {
                sugestoes++;
                if (maior < maiorAtual) maior = maiorAtual;
            }
        }

        if (sugestoes == 0) cout << -1 << endl;
        else cout << sugestoes << " " << maior << endl;
    }



    return 0;
}
