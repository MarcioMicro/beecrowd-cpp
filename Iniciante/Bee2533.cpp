#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int M, N, C, prodNC, totalC;
    double IRA;
    while (cin >> M) {
        prodNC = totalC = IRA = 0;
        for (int i=0; i<M; i++) {
            cin >> N >> C;
            prodNC += N*C;
            totalC += C;
        }
        IRA = (prodNC/(totalC*100.0));
        cout << fixed << setprecision(4) << IRA << endl;
    }

    return 0;
}
