#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {

    int N, cont=0, dias=0;
    string frutas, fruta;
    double valor, somaValor=0, somaKg=0;

    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> valor;
        cin.get();
        getline(cin, frutas);
        somaValor += valor;
        stringstream token(frutas);
        cont = 0;

        while (token >> fruta) {
            cont++;
        }
        cout << "day " << i+1 << ": " << cont << " kg" << endl;
        somaKg += cont;
    }

    cout << fixed << setprecision(2) << somaKg/N << " kg by day" << endl;
    cout << "R$ " << somaValor/N << " by day" << endl;

    return 0;
}
