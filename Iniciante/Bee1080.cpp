#include <iostream>

using namespace std;

int main() {

    int val[100], cont, maior=0;

    for (int i=0; i<100; i++) cin >> val[i];

    for (int i=0; i<100; i++) {
        if (val[i]>maior) {
            maior = val[i];
            cont = i + 1;
        }
    }

    cout << maior << "\n" << cont << "\n";

    return 0;
}
