#include <iostream>

using namespace std;

int main() {

    double N, cont=0;

    for (int i=0; i<6; i++) {
        cin >> N;
        if (N>0) cont ++;
    }
    cout << cont << " valores positivos" << endl;

    return 0;
}
