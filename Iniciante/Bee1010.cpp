#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int p1, p2, q1, q2;
    double v1, v2;

    cin >> p1 >> q1 >> v1;
    cin >> p2 >> q2 >> v2;

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << q1*v1 + q2*v2 << endl;

    return 0;
}
