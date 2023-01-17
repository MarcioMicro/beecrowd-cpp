#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N=0, C=0, R=0, S=0, qtd=0, total=0;
    string tipo;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> qtd >> tipo;
        total += qtd;
        if (tipo=="C") C += qtd;
        else if (tipo=="R") R += qtd;
        else if (tipo=="S") S += qtd;
        qtd=0;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << C << endl;
    cout << "Total de ratos: " << R << endl;
    cout << "Total de sapos: " << S << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << 100.0*C/total << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << 100.0*R/total << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << 100.0*S/total << " %" << endl;

    return 0;
}
