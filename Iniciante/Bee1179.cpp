#include <iostream>

using namespace std;

int main() {

    int N, par[5], impar[5], ip=0, ii=0;

    for (int i=0; i<15; i++) {
        cin >> N;
        if (N%2==0) {
            par[ip] = N;
            ip++;
            if (ip == 5) {
                for (int j=0; j<5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                ip = 0;
            }
        } else {
            impar[ii] = N;
            ii++;
            if (ii == 5) {
                for (int j=0; j<5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                ii = 0;
            }
        }
    }

    for (int i=0; i<ii; i++) cout << "impar[" << i << "] = " << impar[i] << endl;
    for (int i=0; i<ip; i++) cout << "par[" << i << "] = " << par[i] << endl;


    return 0;
}
