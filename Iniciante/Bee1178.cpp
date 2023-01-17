#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double X, N[100], a;
    cin >> X;
    a = X;

    for (int i=0; i<100; i++) {
        N[i] = X;
        cout << fixed << setprecision(4) << "N[" << i << "] = " << N[i] << endl;
        X /= 2;
    }

    return 0;
}
