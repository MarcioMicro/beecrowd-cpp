#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int T, PA, PB, anos;
    double G1, G2;
    cin >> T;

    for (int i=0; i<T; i++) {
        cin >> PA >> PB >> G1 >> G2;
        anos = 0;
        while (PA <= PB) {
            PA += PA*G1/100;
            PB += PB*G2/100;
            anos++;

            if (anos>100) {
                cout << "Mais de 1 seculo.\n";
                break;
            }
        } if (anos<=100) cout <<anos << " anos.\n";
    }


    return 0;
}
