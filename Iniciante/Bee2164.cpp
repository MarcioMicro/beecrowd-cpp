#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int n;
    double res, a, b;
    cin >> n;

    a = pow(((1 + sqrt(5)) / 2), n);
    b = pow(((1 - sqrt(5)) / 2), n);

    res = (a-b) / sqrt(5);

    cout << fixed << setprecision(1) << res << endl;

    return 0;
}
