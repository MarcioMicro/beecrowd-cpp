#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int L;
    double N[12][12], soma=0;
    char T;
    cin >> L >> T;

    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            cin >> N[i][j];
        }
    }

    for (int i=0; i<12; i++)  soma += N[L][i];
    if (T == 'S') cout << fixed << setprecision(1) << soma << "\n";
    if (T == 'M') cout << fixed << setprecision(1) << soma/12 << "\n";

    return 0;
}
