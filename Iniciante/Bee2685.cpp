#include<iostream>

using namespace std;

int main() {

    int M;
    while (cin >> M) {
        if (M>=0 && M<90 || M==360) cout << "Bom Dia!!\n";
        else if (M>=90 && M<180) cout << "Boa Tarde!!\n";
        else if (M>=180 && M<270) cout << "Boa Noite!!\n";
        else if (M>=270 && M<360) cout << "De Madrugada!!\n";
    }

    return 0;
}
