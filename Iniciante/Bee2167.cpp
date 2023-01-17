#include <iostream>

using namespace std;

int main() {

    int N, R, rAnterior=0, indice=0;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> R;
        if (R < rAnterior) {
            indice = i+1;
            break;
        }
        rAnterior = R;
    }
    cout << indice << endl;

    return 0;
}
