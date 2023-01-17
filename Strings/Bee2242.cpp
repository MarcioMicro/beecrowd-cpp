#include<iostream>

using namespace std;

int main() {

    string risada, vogais, inversa="";
    cin >> risada;

    for (int i=0; i<risada.length(); i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' ||
        risada[i] == 'u') vogais += risada[i];
    }

    for (int i=vogais.length()-1; i>=0; i--) inversa += vogais[i];

    if (vogais == inversa) cout << "S\n";
    else cout << "N\n";

    return 0;

}
