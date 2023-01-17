#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int A, B, C, troca;

    cin >> A >> B >> C;

    if (A<B) {
        troca = A;
        A = B;
        B = troca;
    }
    if (A<C) {
        troca = A;
        A = C;
        C = troca;
    }

    if (A>= B+C) cout << "Invalido\n";
    else {
    if (A==B and B==C) cout << "Valido-Equilatero\n";


    else if (A==B || A==C || C==B) cout << "Valido-Isoceles\n";
    else if (A!=B and B!=C) cout << "Valido-Escaleno\n";
    if (pow(A,2) == pow(B,2) + pow(C,2)) cout << "Retangulo: S\n";
    else cout << "Retangulo: N\n";

    }


    return 0;
}
