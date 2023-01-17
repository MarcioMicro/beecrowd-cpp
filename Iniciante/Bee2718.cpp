#include<iostream>

using namespace std;

int main() {

    long long int N, X;
    int cont, maior;

    cin >> N;

    while (N--) {
        cin >> X;
        cont = maior = 0;
        while (X) {
            if (X%2 != 0) {
                cont++;
                X -= 1;
            } else cont = 0;
            if (cont > maior) maior = cont;
            X /= 2;
        }
        cout << maior << endl;
    }

}
