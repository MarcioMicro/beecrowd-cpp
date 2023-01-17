#include <iostream>

using namespace std;

int main() {

    int X, soma;
    cin >> X;

    while (X!=0) {
        if (X%2 != 0) X++;
        soma = 0;
        for (int i=0; i<9; i+=2) {
            soma += X+i;
        }
         cout << soma << endl;
         cin >> X;
    }

    return 0;
}
