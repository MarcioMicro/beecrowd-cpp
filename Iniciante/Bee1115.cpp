#include <iostream>

using namespace std;

int main() {

    int X, Y;

    while (1) {
        cin >> X >> Y;
        if (X==0 || Y==0) break;
        if (X>0 && Y>0) cout << "primeiro\n";
        if (X<0 && Y>0) cout << "segundo\n";
        if (X<0 && Y<0) cout << "terceiro\n";
        if (X>0 && Y<0) cout << "quarto\n";
    }

    return 0;
}
