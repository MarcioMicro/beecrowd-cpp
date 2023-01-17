#include <iostream>

using namespace std;

int main() {

    int p, j1, j2, r, a, soma;

    inicio:

    cin >> p >> j1 >> j2 >> r >> a;

    soma = j1 + j2;

    if(soma%2==0) {
        if(p==0) {
            if(r==0) {
                if(a==0) cout << "Jogador 2 ganha!\n";
                else cout << "Jogador 1 ganha!\n";
            }
            if(r==1) {
                if(a==0) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 2 ganha!\n";
            }
        }
        if(p==1) {
            if(r==0) {
                if(a==0) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 1 ganha!\n";
            }
            if(r==1) {
                if(a==0) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 2 ganha!\n";
            }
        }
    }

    if(soma%2!=0) {
        if(p==0) {
            if(r==0) {
                if(a==0) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 1 ganha!\n";
            }
            if(r==1) {
                if(a==0) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 2 ganha!\n";
            }
        }
        if(p==1) {
            if(r==0) {
                if(a==0) cout << "Jogador 2 ganha!\n";
                else cout << "Jogador 1 ganha!\n";
            }
            if(r==1) {
                if(a==0) cout << "Jogador 1 ganha!\n";
                else cout << "Jogador 2 ganha!\n";
            }
        }
    }






    return 0;
}
