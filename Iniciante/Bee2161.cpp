#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double den = 0.0;
    int N;

    cin >> N;

    for (int i=0; i<N; i++) {
        den += 6.0;
        den = 1/den;
    }

    cout << fixed << setprecision(10) << 3.0 + den << endl;

    return 0;
}
