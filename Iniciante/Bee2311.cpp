#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    double nota, dific, soma, maior, menor;
    string nome;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> nome >> dific;
        menor = 10.0;
        maior = 0.0;
        soma = 0.0;

        for (int j=0; j<7; j++) {
            cin >> nota;
            if (menor > nota) menor = nota;
            if (maior < nota) maior = nota;
            soma += nota;
        }
        soma = (soma - maior - menor)*dific;
        cout << nome << " " << fixed << setprecision(2) << soma << endl;

    }

    return 0;
}
