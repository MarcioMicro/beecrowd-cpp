#include <iostream>

using namespace std;

int main() {

    int M[1000], N[1000], tempM=1, tempN=1, cont=0;

    for (int i=0; tempM>0 && tempN>0; i++) {
        cin >> M[i] >> N[i];
        if (M[i] > N[i]) {
        M[i] = M[i] + N[i];
        N[i] = M[i] - N[i];
        M[i] = M[i] - N[i];
        }
        tempM = M[i];
        tempN = N[i];
        cont++;
    }

    int soma[cont-1], seq;

    for (int i=0; i<cont-1; i++) {
        seq = M[i];
        soma[i] = 0;
        for (int j=0; j<=N[i]-M[i]; j++) {
            cout << seq << " ";
            soma[i] += seq;
            seq ++;
        }
        cout << "Sum=" << soma[i] << endl;
    }



    return 0;
}
