#include <iostream>

using namespace std;

int main() {

    int J=7, I=1, cont=4;

    for (I; I<10; I+=2) {
        for (J; J>cont; J--) {
        cout << "I=" << I << " J=" << J << endl;
        }
        J+=5;
        cont+=2;
    }

    return 0;
}
