#include <iostream>

using namespace std;

int main() {

    int N, D, participantes;
    string data, dataEscolhida;
    bool resposta, descartar, decisao;

    while (cin >> N >> D) {
        dataEscolhida = "";
        decisao = 0;
        for (int i=0; i<D; i++) {
            descartar = 0;
            cin >> data;
            for (int j=0; j<N; j++) {
                cin >> resposta;
                if (resposta==0) descartar = 1;
            }
            if (descartar == 0) {
                if (dataEscolhida == "") dataEscolhida = data;
                decisao = 1;
            }
        }
        if (decisao == 0) cout << "Pizza antes de FdI" << endl;
        else cout << dataEscolhida << endl;
    }

    return 0;
}
