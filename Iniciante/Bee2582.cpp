#include <iostream>

using namespace std;

int main() {

    string musica[11] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!",
    "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

    int N, botao1, botao2;
    cin >> N;

    while (N--) {
        cin >> botao1 >> botao2;
        cout << musica[botao1+botao2] << endl;
    }

    return 0;
}
