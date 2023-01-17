#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    inicio:

    double nota, soma=0;
    int cont=0, repetir;

    while (cont<2){
        cin >> nota;
        if (nota<0 || nota>10) cout << "nota invalida\n";
        else {
            cont++;
            soma += nota;
        }
    }
    cout << fixed << setprecision(2) << "media = " << soma/2 << endl;

    erro:
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> repetir;

    if (repetir == 1) goto inicio;
    else if (repetir !=2) goto erro;

    return 0;
}
