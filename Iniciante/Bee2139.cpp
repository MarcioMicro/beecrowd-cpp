#include <iostream>

using namespace std;

int main() {

    int mes, dia, difMeses, mesesAnt[11] = {30,31,30,31,31,30,31,30,31,29,31}, diasAnt, falta;

    while (cin >> mes >> dia) {
        difMeses = 12 - mes;
        diasAnt = 0;

        for (int i=0; i<difMeses; i++) diasAnt += mesesAnt[i];

        diasAnt += 25 - dia;

        if (diasAnt==0) cout << "E natal!\n";
        else if (diasAnt==1) cout << "E vespera de natal!\n" ;
        else if (diasAnt<0) cout << "Ja passou!\n" ;
        else cout << "Faltam " << diasAnt << " dias para o natal!\n";

    }

    return 0;
}
