#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    string entrada, sinal="";
    double X;

    cin >> entrada;

    if (entrada[0] == '-') sinal = "-";
    else sinal = "+";

    X = stod(entrada);
    X = abs(X);

    cout << sinal << scientific << setprecision(4) << uppercase << X << endl;

    return 0;
}
