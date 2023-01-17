#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int codigo, qtde;

    cin >> codigo >> qtde;

    if (codigo == 1) {

        cout << fixed << setprecision(2) << "Total: R$ " << qtde * 4.00 << endl;

    }

    if (codigo == 2) {

        cout << fixed << setprecision(2) << "Total: R$ " << qtde * 4.50 << endl;

    }

    if (codigo == 3) {

        cout << fixed << setprecision(2) << "Total: R$ " << qtde * 5.00 << endl;

    }

    if (codigo == 4) {

        cout << fixed << setprecision(2) << "Total: R$ " << qtde * 2.00 << endl;

    }

    if (codigo == 5) {

        cout << fixed << setprecision(2) << "Total: R$ " << qtde * 1.50 << endl;

    }

    return 0;
}
