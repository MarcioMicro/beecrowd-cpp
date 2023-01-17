#include <iostream>

using namespace std;

int main() {

    int N, X, maior, segundoMaior, indiceMaior, indiceSegundo;
    cin >> N;

    while (N>0) {
        maior = segundoMaior = indiceMaior = indiceSegundo = 0;
        for (int i=0; i<N; i++) {
            cin >> X;
            if (X>maior) {
                indiceSegundo = indiceMaior;
                segundoMaior = maior;
                indiceMaior = i;
                maior = X;
            }
            else if (X>segundoMaior) {
                indiceSegundo = i;
                segundoMaior = X;
            }
        }
        cout << indiceSegundo +1 << endl;
        cin >> N;
    }

    return 0;
}
