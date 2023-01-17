#include <iostream>

using namespace std;

int main() {

    int J, I;

    for (I=1; I<10; I+=2) {
        for (J=7; J>4; J--) {
        cout << "I=" << I << " J=" << J << endl;
        }
    }

    return 0;
}
