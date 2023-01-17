#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int nfunc , htrabalhadas;
    double vhora , salary;

    cin >> nfunc >> htrabalhadas >> vhora;

    salary = htrabalhadas * vhora;

    cout << "NUMBER = " << nfunc << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary <<endl;

    return 0;
}
