#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, e, par=0, impar=0, neg=0, pos=0;

    cin >> a >> b >> c >> d >> e;

    int array[5] = {a, b, c, d, e};

    for (int i=0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
        if (array[i] > 0) {
            pos++;
        } else if (array[i] < 0) {
            neg++;
        }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}
