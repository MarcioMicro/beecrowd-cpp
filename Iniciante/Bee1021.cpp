#include <iostream>

using namespace std;

int main() {

    int valor, nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda050, moeda025, moeda010, moeda005, moeda001;
    double valorinicial;

    cin >> valorinicial;

    valor = valorinicial*100;
    nota100 = valor / 10000;
    valor = valor % 10000;
    nota50 = valor / 5000;
    valor = valor % 5000;
    nota20 = valor / 2000;
    valor = valor % 2000;
    nota10 = valor / 1000;
    valor = valor % 1000;
    nota5 = valor / 500;
    valor = valor % 500;
    nota2 = valor / 200;
    valor = valor % 200;
    moeda1 = valor / 100;
    valor = valor % 100;
    moeda050 = valor / 50;
    valor = valor % 50;
    moeda025 = valor / 25;
    valor = valor % 25;
    moeda010 = valor / 10;
    valor = valor % 10;
    moeda005 = valor / 5;
    valor = valor % 5;
    moeda001 = valor / 1;
    valor = valor % 1;

    cout << "NOTAS:" << endl <<nota100 << " nota(s) de R$ 100.00" << endl;
    cout << nota50 << " nota(s) de R$ 50.00" << endl;
    cout << nota20 << " nota(s) de R$ 20.00" << endl;
    cout << nota10 << " nota(s) de R$ 10.00" << endl;
    cout << nota5 << " nota(s) de R$ 5.00" << endl;
    cout << nota2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl << moeda1 << " moeda(s) de R$ 1.00" << endl;
    cout << moeda050 << " moeda(s) de R$ 0.50" << endl;
    cout << moeda025 << " moeda(s) de R$ 0.25" << endl;
    cout << moeda010 << " moeda(s) de R$ 0.10" << endl;
    cout << moeda005 << " moeda(s) de R$ 0.05" << endl;
    cout << moeda001 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
