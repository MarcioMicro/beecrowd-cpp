#include <iostream>

using namespace std;

int main() {

    int X, Z, cont=1;
    cin >> X;

    do {
        cin >> Z;
    } while (X>=Z);

    for (int i=X; X<Z; i++) {
        X += i+1;
        cont++;
    }

    cout << cont << "\n";


    return 0;
}
