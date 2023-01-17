#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    double X1, X2, X3, soma=0;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> X1 >> X2 >> X3;
        soma = (X1*2 + X2*3 + X3*5)/10;
        cout << fixed << setprecision(1) << soma << endl;
        soma = 0;
    }

    return 0;
}
