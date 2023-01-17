#include <iostream>

using namespace std;

int main() {

    int X, Y, troca, soma=0, i;

    cin >> X >> Y;

    if (X>Y){
        troca = X;
        X = Y;
        Y = troca;
    }

    for (i = X+1; i<Y; i++) {
        if (i%2 != 0) soma += i;
    }

    cout << soma << endl;

    return 0;
}
