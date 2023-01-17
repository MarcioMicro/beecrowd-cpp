#include <iostream>

using namespace std;

int main() {

    int golsInter, golsGremio, vitInter=0, vitGremio=0, empate=0, novoGrenal, totalGrenais=0;

    do {
        cin >> golsInter >> golsGremio;

        if (golsInter>golsGremio) vitInter++;
        else if (golsInter<golsGremio) vitGremio++;
        else empate++;

        totalGrenais++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> novoGrenal;
    } while(novoGrenal==1);

    cout << totalGrenais << " grenais" << "\nInter:" << vitInter << "\nGremio:" << vitGremio
        << "\nEmpates:" << empate;

    if (vitInter > vitGremio) cout << "\nInter venceu mais\n";
    else if (vitInter < vitGremio) cout << "\nGremio venceu mais\n";
    else cout << "\nNao houve vencedor\n";

    return 0;
}
