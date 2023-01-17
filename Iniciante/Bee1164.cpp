#include <iostream>

using namespace std;

int main() {

    int N, X, soma;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> X;
        soma=0;
        for (int j=1; j<X; j++) {
            if (X%j == 0) soma += j;
        }
        if (soma == X) cout << X << " eh perfeito\n";
        else cout << X << " nao eh perfeito\n";
    }

    return 0;
}
