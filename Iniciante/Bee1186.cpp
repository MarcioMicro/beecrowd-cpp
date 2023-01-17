#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double M[12][12], soma=0;
    char T;
    cin >> T;
    int div=0;


    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            cin >> M[i][j];
        }
    }

    int j, indj=11;

    for (int i=1; i<12; i++) {
        j = indj;
        for (j; j<12; j++) {
            soma += M[i][j];
            div++;
        }
        indj--;
    }
    if (T == 'S') cout << fixed << setprecision(1) << soma << "\n";
    if (T == 'M') cout << fixed << setprecision(1) << soma/div << "\n";

    return 0;
}
