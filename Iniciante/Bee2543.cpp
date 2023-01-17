#include <iostream>

using namespace std;

int main() {

    int N, I, i, j, cont;

    while (cin >> N >> I) {
        cont = 0;
        for (int x=0; x<N; x++) {
            cin >> i >> j;
            if (i==I && j==0) cont++;
        }
        cout << cont << endl;
    }

    return 0;
}
