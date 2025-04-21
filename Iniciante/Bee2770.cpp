#include <iostream>

using namespace std;

int main() {

    int X, Y, M, X1, X2, placaEmpresa;

    while (cin >> X >> Y >> M) {
        placaEmpresa = X*Y;
        for (int i=0; i<M; i++) {
            cin >> X1 >> X2;
            if (placaEmpresa < X1*X2 || min(X,Y)<min(X1,X2) || max(X,Y)<max(X1,X2)) cout << "Nao\n";
            else cout << "Sim\n";
        }
    }

    return 0;
}
