#include<iostream>

using namespace std;

int main() {

    string rastro;
    int N, cont, ciclos;
    while (cin >> rastro >> N) {
        ciclos = 0;
        cont = 0;

        if(N==1) cout << rastro.length() << endl;
            else {
        while (rastro!="") {



                if (rastro[0] == 'R') {
                    if (cont < N-1) {
                        if (cont == 0) ciclos++;
                        cont++;
                        rastro.erase(0,1);
                    } else {
                        cont =0;
                        rastro.erase(0,1);
                    }
                } else {
                    cont = 0;
                    ciclos++;
                    rastro.erase(0,1);
                }
            }

        cout << ciclos << endl;
        }
    }

    return 0;

}
