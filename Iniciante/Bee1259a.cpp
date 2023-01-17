#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int N, tamPar=0, tamImpar=0, valor;
    cin >> N;
    int par[N], impar[N];

    for (int i=0; i<N; i++) {
        cin >> valor;
        if (valor%2==0) {
            par[tamPar] = valor;
            tamPar++;
        } else {
            impar[tamImpar] = valor;
            tamImpar++;
        }
    }

    sort (&par[0], &par[tamPar]);
    sort (&impar[0], &impar[tamImpar]);

    for (int i=0; i<tamPar; i++) cout << par[i] << endl;
    for (int i=tamImpar-1; i>=0; i--) cout << impar[i] << endl;

    return 0;
}
