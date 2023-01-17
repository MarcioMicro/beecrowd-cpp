#include <iostream>

using namespace std;

int main() {

    double I=0, J=1, cont=3;

    for (I; I<=2; I+=0.2) {
        for (J; J<=cont; J++) {
        cout << "I=" << I << " J=" << J << endl;
        }
        J-=2.8;
        cont+=0.2;
    }

    return 0;
}
