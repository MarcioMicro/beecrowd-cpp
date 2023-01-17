#include <iostream>

using namespace std;

int main() {

    int X, Y, soma=0;

    cin >> X >> Y;

    if (X>Y) {
        X = X + Y;
        Y = X - Y;
        X = X - Y;
    }

    if (X%2 == 0) X++;
    else X += 2;

    for (int i = X; i<Y; i+=2) {
        soma += i;
    }

    cout << soma << endl;

    return 0;
}
