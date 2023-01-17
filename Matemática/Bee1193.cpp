#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

    int N, pot, nConv, x;
    cin >> N;

    for (int i=0; i<N; i++) {
        string numero, tipo, resBin;
        cin >> numero >> tipo;

        if (tipo == "bin") {
            cout << "Case " << i+1 << ":\n";
            cout << strtol(numero.c_str(), NULL, 2) << " dec" << endl;
            cout << hex << strtol(numero.c_str(), NULL, 2) << " hex" << dec << "\n\n";
        }

        if (tipo == "dec") {
            nConv = strtol(numero.c_str(), NULL, 10);
            pot = 0;
            resBin = "";
            cout << "Case " << i+1 << ":\n";
            cout << hex << nConv << " hex" << dec << "\n";

            while (nConv >= pow(2, pot+1)) pot++;

            for (pot; pot>=0; pot--) {
                x = pow(2, pot);
                if (nConv / x > 0) {
                    resBin += '1';
                    nConv %= x;
                }
                else resBin += '0';
            }
            cout << resBin << " bin" << "\n\n";

        }

        if (tipo == "hex") {
            cout << "Case " << i+1 << ":\n";
            cout << strtol(numero.c_str(), NULL, 16) << " dec" << endl;

            nConv = strtol(numero.c_str(), NULL, 16);
            pot = 0;
            resBin = "";
            while (nConv >= pow(2, pot+1)) pot++;

            for (pot; pot>=0; pot--) {
                x = pow(2, pot);
                if (nConv / x > 0) {
                    resBin += '1';
                    nConv %= x;
                }
                else resBin += '0';
            }
            cout << resBin << " bin" << "\n\n";
        }

    }

    return 0;
}
