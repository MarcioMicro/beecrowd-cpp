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

    for (int i=X+1 ; i<Y; i++) if (i%5 == 2 || i%5 == 3) cout << i << "\n";

    return 0;
}
