#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double V, D, pi=3.14, A, h;

    while (cin >> V && cin >> D) {
        A = pi * pow(D/2, 2);
        h = V / A;
        cout << fixed << setprecision(2) << "ALTURA = " << h << "\nAREA = " << A << endl;
    }

    return 0;
}
