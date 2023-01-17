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

    for (int i=X ; i<=Y; i++) if (i%13 != 0) soma += i;

    cout << soma << "\n";

    return 0;
}
