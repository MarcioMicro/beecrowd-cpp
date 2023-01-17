#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int idade, cont=0;
    double soma=0;

    while (1) {
        cin >> idade;
        if (idade >= 0) {
        soma += idade;
        cont++;
        } else break;
    }

    cout << fixed << setprecision(2) << soma/cont << "\n";

    return 0;
}
