#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double nota, soma=0;
    int cont=0;

    while (cont<2){
        cin >> nota;
        if (nota<0 || nota>10) cout << "nota invalida\n";
        else {
            cont++;
            soma += nota;
        }
    }
    cout << fixed << setprecision(2) << "media = " << soma/2 << endl;

    return 0;
}
