#include <iostream>

using namespace std;

int main() {

    int T, soma;
    string N;
    bool zero;
    cin >> T;

    for (int i=0; i<T; i++) {
        cin >> N;
        soma = 0;
        int resto[N.length()];
        zero = false;
        for (int j=0; j<N.length(); j++) N[j] -= '0';

        while (!zero) {
            zero = true;
            resto[0] = (N[0]%2)*10;
            N[0] /= 2;

            for (int j=1; j<N.length(); j++) {
                resto[j] = ((N[j] + resto[j-1])%2)*10;
                N[j] = (N[j] + resto[j-1]) / 2;
            }
            soma += resto[N.length()-1] / 10;
            for (int j=0; j<N.length(); j++) if(N[j] != 0) zero = false;

        }

        cout << soma << endl;
    }


    return 0;
}
