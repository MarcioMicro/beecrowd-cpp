#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    double S, B, A, S1, B1, A1, somaS, somaB, somaA, somaS1, somaB1, somaA1;
    string nome;
    cin >> N;
    somaS = somaB = somaA = somaS1 = somaB1 = somaA1 = 0;

    for (int i=0; i<N; i++) {
        cin >> nome >> S >> B >> A >> S1 >> B1 >> A1;
        somaS += S;
        somaB += B;
        somaA += A;
        somaS1 += S1;
        somaB1 += B1;
        somaA1 += A1;
    }

    cout << fixed << setprecision(2) << "Pontos de Saque: " << somaS1/somaS*100
    << " %.\nPontos de Bloqueio: " << somaB1/somaB*100 << " %.\nPontos de Ataque: "
    << somaA1/somaA*100 << " %.\n";

    return 0;
}
