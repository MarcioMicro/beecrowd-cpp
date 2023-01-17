#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double salario, reajuste;
    int percentual;

    cin >> salario;

    if (salario<=400) percentual = 15;
    if (salario>400 and salario<=800) percentual = 12;
    if (salario>800 and salario<=1200) percentual = 10;
    if (salario>1200 and salario<=2000) percentual = 7;
    if (salario>2000) percentual = 4;

    reajuste = salario * percentual / 100;

    cout << fixed << setprecision(2) << "Novo salario: " << salario + reajuste << "\nReajuste ganho: " << reajuste << "\nEm percentual: " << percentual << " %\n";

    return 0;
}
