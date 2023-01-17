#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string nome;
    double salfixo , tvendas;

    cin >> nome >> salfixo >> tvendas;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << salfixo + tvendas*0.15 << endl;

    return 0;
}
