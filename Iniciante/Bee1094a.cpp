#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, testes, cobaias=0;
    double coelhos=0, ratos=0, sapos=0;
    char tipo;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> testes >> tipo;
        cobaias += testes;
        if (tipo == 'C') coelhos+=testes;
        else if (tipo == 'R') ratos+=testes;
        else if (tipo == 'S') sapos+=testes;
    }
    cout << "Total: " << cobaias << " cobaias\nTotal de coelhos: " << coelhos
    << "\nTotal de ratos: " << ratos << "\nTotal de sapos: " << sapos
    << "\nPercentual de coelhos: " << fixed << setprecision(2) << coelhos/cobaias*100
    << " %\nPercentual de ratos: " << ratos/cobaias*100 << " %\nPercentual de sapos: "
    << sapos/cobaias*100 << " %\n";

    return 0;
}
