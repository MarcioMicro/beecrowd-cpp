#include <iostream>

using namespace std;

int main() {

    int tipoCombustivel, alcool=0, gasolina=0, diesel=0;

    do {
        cin >> tipoCombustivel;
        if (tipoCombustivel == 1) alcool++;
        else if (tipoCombustivel == 2) gasolina++;
        else if (tipoCombustivel == 3) diesel++;
    } while (tipoCombustivel != 4);

    cout << "MUITO OBRIGADO\nAlcool: " << alcool << "\nGasolina: " << gasolina
        << "\nDiesel: " << diesel << "\n";

    return 0;
}
