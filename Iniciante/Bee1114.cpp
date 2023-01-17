#include <iostream>

using namespace std;

int main() {

    int digito, senha = 2002, verif=0;

    while (verif==0) {
        cin >> digito;
        if (digito != senha) cout << "Senha Invalida\n";
        if (digito == senha) {
            cout << "Acesso Permitido\n";
            verif=1;
        }
    }

    return 0;
}
