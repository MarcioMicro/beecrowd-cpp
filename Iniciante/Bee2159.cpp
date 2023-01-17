#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int n;
    double minimo, maximo;

    cin >> n;

    minimo = n / log(n);
    maximo = 1.25506 * n / log(n);

    cout << fixed << setprecision(1) << minimo << " " << maximo << endl;

    return 0;
}
