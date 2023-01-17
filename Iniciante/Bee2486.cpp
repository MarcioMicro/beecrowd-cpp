#include <iostream>

using namespace std;

int main() {


    int T, N, soma, minC=110, maxC=130;
    string alimento;
    cin >> T;

    while (T!=0) {
        soma = 0;
        for (int i=0; i<T; i++) {
            cin >> N;
            getline(cin,alimento);
            //getline(cin,alimento);
            if (alimento==" suco de laranja") soma += 120*N;
            else if (alimento==" morango fresco") soma += 85*N;
            else if (alimento==" mamao") soma += 85*N;
            else if (alimento==" goiaba vermelha") soma += 70*N;
            else if (alimento==" manga") soma += 56*N;
            else if (alimento==" laranja") soma += 50*N;
            else if (alimento==" brocolis") soma += 34*N;
        }
        if (soma<=minC) cout << "Mais " << minC-soma << " mg\n";
        else if (soma>maxC) cout << "Menos " << soma-maxC << " mg\n";
        else cout << soma << " mg\n";

        cin >> T;
    }

    return 0;
}
