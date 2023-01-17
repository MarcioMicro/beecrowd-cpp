#include <iostream>

using namespace std;

int main() {

    int N, par=0, impar=0, pos=0, neg=0;

    for (int i=0; i<5; i++) {
        cin >> N;
        if (N%2==0) par ++;
        else impar++;

        if (N>0) pos ++;
        else if(N<0) neg++;
    }
    cout << par << " valor(es) par(es)" << endl << impar << " valor(es) impar(es)"
    << endl << pos << " valor(es) positivo(s)" << endl << neg << " valor(es) negativo(s)" << endl;

    return 0;
}
