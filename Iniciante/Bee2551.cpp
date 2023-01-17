#include <iostream>

using namespace std;

int main() {

    int N;
    double T, D, velMedia;

    while (cin >> N) {
        velMedia=0;
        for (int i=0; i<N; i++) {
            cin >> T >> D;
            if (D/T > velMedia) {
                cout << i+1 << endl;
                velMedia = D/T;
            }
        }
    }

    return 0;
}
