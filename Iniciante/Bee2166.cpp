#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double raiz=1.0;
    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        raiz = 1 + (1 / (1 + raiz));
    }

    cout << fixed << setprecision(10) << raiz << endl;

    return 0;
}
