#include<iostream>
#include<map>
#include<iomanip>

using namespace std;

int main() {

    map<char, double> mapNotas;
    mapNotas['W'] = 1;
    mapNotas['H'] = 0.5;
    mapNotas['Q'] = 0.25;
    mapNotas['E'] = 0.125;
    mapNotas['S'] = 0.0625;
    mapNotas['T'] = 0.03125;
    mapNotas['X'] = 0.015625;

    string melodia;
    double soma;
    int cont;

    while (cin >> melodia && melodia != "*") {
        cont = 0;
        soma = 0;
        for (int i=0; i<melodia.size(); i++) {
            if (melodia[i] == '/') {
                if (soma == 1) cont++;
                soma = 0;
            }
            else {
                soma += mapNotas[melodia[i]];
            }
        }
        cout << cont << endl;
    }

    return 0;
}
