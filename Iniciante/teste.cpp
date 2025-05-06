#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> seq(N, 1); // Inicializa com todos os elementos como 1

    // Preenche de trás para frente
    for (int i = N - 3; i >= 0; --i) {
        seq[i] = seq[i + 1] + seq[i + 2];
    }

    // Imprime sem espaço extra no final
    for (int i = 0; i < N; ++i) {
        cout << seq[i];
        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
