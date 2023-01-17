#include<iostream>
#include<sstream>
#include<string.h>

using namespace std;

int main() {

    string linha, palavra;
    char anterior, seq;
    int cont;

    while (getline (cin, linha)) {
        stringstream stream(linha);
        cont = 0;
        anterior = seq = 0;
        while (stream >> palavra) {
            if (tolower(palavra[0]) != tolower(seq)) {
                if (tolower(palavra[0]) == tolower(anterior)) {
                    cont++;
                    seq = palavra[0];
                } else seq = 0;
                anterior = palavra[0];
            }
        }
        cout << cont << endl;
    }

    return 0;

}
