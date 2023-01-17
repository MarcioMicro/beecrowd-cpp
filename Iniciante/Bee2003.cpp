#include <iostream>

using namespace std;

int main() {

    string hora;
    int minutos, atraso, h, d, m;

    while (cin >> hora) {

    h = hora[0] - '0';
    d = hora[2] - '0';
    m = hora[3] - '0';
    minutos = h*60 + d*10 + m;

    if (minutos > 420) atraso = minutos - 420;
    else atraso = 0;

    cout << "Atraso maximo: "  << atraso << endl;

    }

    return 0;
}
