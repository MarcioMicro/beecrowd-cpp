#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N;
    cin >> N;

    double X[N], Y[N];
    for (int i=0; i<N; i++) {
        cin >> X[i] >> Y[i];
        if (Y[i]==0) cout << "divisao impossivel\n";
        else cout << fixed << setprecision(1) << X[i]/Y[i] << endl;
    }

    return 0;
}
