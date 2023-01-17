#include <iostream>

using namespace std;

int main() {

    int N;
    string j1, j2;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> j1 >> j2;

        if (j1 == "ataque") {
            if (j2 == "ataque") cout << "Aniquilacao mutua\n";
            else if (j2 == "pedra") cout << "Jogador 1 venceu\n";
            else if (j2 == "papel") cout << "Jogador 1 venceu\n";
        }
        else if (j1 == "pedra") {
            if (j2 == "ataque") cout << "Jogador 2 venceu\n";
            else if (j2 == "pedra") cout << "Sem ganhador\n";
            else if (j2 == "papel") cout << "Jogador 1 venceu\n";
        }
        else if (j1 == "papel") {
            if (j2 == "ataque") cout << "Jogador 2 venceu\n";
            else if (j2 == "pedra") cout << "Jogador 2 venceu\n";
            else if (j2 == "papel") cout << "Ambos venceram\n";
        }
    }

    return 0;
}
