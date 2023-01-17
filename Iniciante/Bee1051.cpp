#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double salario, ir;

    cin >> salario;

    if(salario>4500) {
        ir = (salario - 4500)*0.28;
        salario = 4500.00;
    }
    if(salario>3000) {
        ir = ir + (salario - 3000)*0.18;
        salario = 3000.00;
    }
    if(salario>2000) {
        ir = ir + (salario - 2000)*0.08;
    }
    if(salario<=2000) {
        cout << "Isento\n";
    } else {
        cout << fixed << setprecision(2) << "R$ " << ir << endl;
    }

    return 0;
}
