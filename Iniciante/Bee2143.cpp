#include <iostream>

using namespace std;

int main() {

    int T, N, pedidos;
    cin >> T;

    while (T>0) {
        for (int i=0; i<T; i++) {
            cin >> N;
            if (N%2 == 0) pedidos = N*2-2;
            else pedidos = N*2-1;
            cout << pedidos << "\n";
        }
        cin >> T;
    }

    return 0;
}
