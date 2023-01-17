#include <iostream>

using namespace std;

int main() {

    int hi, hf;

    cin >> hi >> hf;

    if (hi<hf) {
        cout << "O JOGO DUROU " << hf-hi <<  " HORA(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << hf-hi+24 <<  " HORA(S)" << endl;
    }

    return 0;
}
