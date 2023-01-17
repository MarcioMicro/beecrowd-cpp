#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double xf, yf, xi, yi, vi, r1, r2;
    double distUlt, distFuga;
    while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2) {

        distUlt = r1 + r2;
        distFuga = sqrt(pow(xf-xi, 2) + pow(yf-yi, 2)) + vi*1.5;

        if (distUlt >= distFuga) cout << "Y\n";
        else cout << "N\n";
    }

    return 0;
}
