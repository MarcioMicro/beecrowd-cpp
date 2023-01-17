#include <iostream>

using namespace std;

int main() {

    int X[1000], Y[1000], tempX=1, tempY=0, cont=0;

    for (int i=0; tempX != tempY; i++) {
        cin >> X[i] >> Y[i];
        tempX = X[i];
        tempY = Y[i];
        cont++;
    }

    for (int i=0; i<cont-1; i++) {
        if (X[i]<Y[i]) cout << "Crescente\n";
        else cout << "Decrescente\n";
    }

    return 0;
}
