#include <iostream>

using namespace std;

int main() {

    int N, pos=0, valor=0;
    cin >> N;
    int T[N];

    for (int i=0; i<N; i++) {
        cin >> T[i];
        if (i==0) valor = T[i];
        else  if (T[i] < valor) {
            pos = i;
            valor = T[i];
        }
    }

    cout << pos +1 << "\n";

    return 0;
}
