#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int A, B, C, areaInicial, ladoMinTerreno;
    cin >> A >> B >> C;

    while (A*B*C != 0) {
        areaInicial = (A*B*100)/C;
        ladoMinTerreno = sqrt(areaInicial);
        cout << ladoMinTerreno << endl;
        cin >> A >> B >> C;
    }


    return 0;
}
