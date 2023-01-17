#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    cin >> N;
    double val[3], med[N];

    for (int i=0; i<N; i++) {
        for (int j=0; j<3; j++) {
            cin >> val[j];
        }

        med[i] = (val[0]*0.2 + val[1]*0.3 + val[2]*0.5);

    }

    for (int i=0; i<N; i++) cout << fixed << setprecision(1) << med[i] << endl;

    return 0;
}
