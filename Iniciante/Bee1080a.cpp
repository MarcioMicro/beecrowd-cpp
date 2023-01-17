#include <iostream>

using namespace std;

int main() {

    int N, posicao, maior=0;

    for (int i=1; i<=100; i++) {
        cin >> N;
        if (N>maior) {
        posicao = i;
        maior = N;
        }
    }
    cout << maior << endl << posicao << endl;

    return 0;
}
