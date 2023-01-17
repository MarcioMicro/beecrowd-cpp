#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string linha1, linha2, cpf, strValor1, strValor2;
    double valor1, valor2;
    int cpfCont=0, valor1Cont=0, valor2Cont=0, virgula=-1;
    cin >> linha1 >> linha2;

    for (int i=0; i<linha1.length(); i++) {
        if (linha1[i] >= '0' && linha1[i] <= '9' || linha1[i] == '.') {
            if (cpfCont < 11) {
                cpf += linha1[i];
                cpfCont++;
            }
            else {
                if (virgula != 0) {
                    strValor1 += linha1[i];
                    if (virgula > 0) virgula--;
                }
                if (linha1[i]=='.') virgula = 2;
            }
        }
    }

    virgula = -1;
    for (int i=0; i<linha2.length(); i++) {
        if (linha2[i] >= '0' && linha2[i] <= '9' || linha2[i] == '.') {
            if (virgula != 0) {
                strValor2 += linha2[i];
                if (virgula > 0) virgula--;
            }
            if (linha2[i]=='.') virgula = 2;

        }
    }

    valor1 = stod(strValor1);
    valor2 = stod(strValor2);

    cout << fixed << setprecision(2) << "cpf " << cpf << endl << valor1+valor2 << endl;


    return 0;
}
