#include <iostream>

using namespace std;

int main() {

    int N, A, aMin, aMax, cont;

    while (cin >> N >> aMin >> aMax) {
        cont = 0;
        for (int i=0; i<N; i++) {
            cin >> A;
            if (A>=aMin && A<=aMax) cont++;
        }
        cout << cont << endl;
    }

    return 0;
}
