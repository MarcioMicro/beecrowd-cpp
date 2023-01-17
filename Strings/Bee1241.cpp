#include<iostream>

using namespace std;

int main() {

    int N;
    string pMaior, pMenor, final;
    cin >> N;

    while (N) {
        cin >> pMaior >> pMenor;

        if (pMaior.length()<pMenor.length()) cout << "nao encaixa\n";
        else {
            final = pMaior.substr(pMaior.length()-pMenor.length(),pMenor.length());
            if (pMenor == final) cout << "encaixa\n";
            else cout << "nao encaixa\n";
        }

        N--;
    }

    return 0;

}
