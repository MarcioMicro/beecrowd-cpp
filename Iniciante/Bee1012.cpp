#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double A, B, C, pi=3.14159;

    cin >> A >> B >> C;

    cout << fixed << setprecision(3) << "TRIANGULO: " << A*C/2 << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << pi * pow(C,2) << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << (A+B)*C/2 << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << pow(B,2) << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << A*B << endl;

    return 0;
}
