#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    string numero, nHex;
    cin >> numero;

    while (numero[0] != '-') {
        if (numero[1] == 'x') {
            nHex = "";
            for (int i=2; i< numero.size(); i++) {
                nHex += numero[i];
            }
            cout << dec << strtol(nHex.c_str(), NULL, 16) << endl;
        }

        else {
            cout << "0x" << uppercase << hex << strtol(numero.c_str(), NULL, 10) << endl;
        }


        cin >> numero;
    }

    return 0;
}
