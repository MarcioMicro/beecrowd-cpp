#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {

    string nome;
    int distancia, cont=0;
    double somaDistancia;

    while (getline(cin, nome)) {
        cin >> distancia;
        cin.get();

        somaDistancia += distancia;
        cont++;
    }
    cout << fixed << setprecision(1) << somaDistancia/cont << endl;

    return 0;
}
