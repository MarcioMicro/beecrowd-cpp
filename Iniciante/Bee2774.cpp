#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int H, M, QT;

    while (cin >> H >> M) {
        QT = H*60 / M;

        double X[QT], Xm, total=0, p, total2=0;

        for (int i=0; i<QT; i++) {
            cin >> X[i];
            total += X[i];
        }

        Xm = total/QT;

        for (int i=0; i<QT; i++) {
            total2 += (X[i]-Xm)*(X[i]-Xm);
        }
        cout << fixed << setprecision(5) << sqrt(total2/(QT-1)) << endl;
    }

    return 0;
}
