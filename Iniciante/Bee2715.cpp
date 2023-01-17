#include<iostream>
#include<cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);

    long long N, soma, valor, dif1, dif2, ind;

    while (cin >> N) {
        long long X[N];
        soma = valor = dif1 = dif2 = ind = 0;
        for (int i=0; i<N; i++) {
            cin >> X[i];
            soma += X[i];
        }
        while (valor <= soma/2) {
            valor += X[ind];
            dif1 = abs(soma - valor*2);
            dif2 = soma - (valor - X[ind])*2;
            ind++;
        }
        if (dif1 < dif2) cout << dif1 << "\n";
        else cout << dif2 << "\n";
    }

}
