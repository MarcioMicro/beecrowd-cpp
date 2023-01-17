#include<iostream>
#include<map>
#include<iomanip>

using namespace std;

int main() {

    map<string, double> mapPrecos;
    int N, M, P, qtd;
    string produto;
    double preco, soma;

    cin >> N;

    while (N--) {
        soma = 0.0;
        mapPrecos.clear();
        cin >> M;
        while (M--) {
            cin >> produto >> preco;
            mapPrecos[produto] = preco;
        }
        cin >> P;
        while (P--) {
            cin >> produto >> qtd;
            soma += mapPrecos[produto]*qtd;
        }
        cout << fixed << setprecision(2) << "R$ " << soma << endl;
    }

    return 0;
}
