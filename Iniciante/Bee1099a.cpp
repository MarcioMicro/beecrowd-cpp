#include <iostream>

using namespace std;

int main() {

    int N, X, Y, soma;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> X >> Y;

        if (X>Y) {
            X = X + Y;
            Y = X - Y;
            X = X - Y;
        }

        if (X%2==0) X++;
        else X += 2;

        soma = 0;

        for (X; X<Y; X+=2) soma += X;

        cout << soma << endl;
    }


    return 0;
}
