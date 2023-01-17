#include <iostream>

using namespace std;

int main() {

    int N, X, Y, cont;
    cin >> N;

    for (int i=0; i<N; i++) {

        cin >> X >> Y;
        if (X%2 == 0) X++;
        cont = 0;

        for (int j=0; j<Y; j++) {
            cont += X;
            X+=2;
        }

        cout << cont << endl;

    }

    return 0;
}
