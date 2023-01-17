#include <iostream>

using namespace std;

int main() {

    int N, X, primo;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> X;
        primo = 0;
        for (int j=2; j<X; j++) {
            if (X%j == 0) {
                primo = 1;
                break;
            }
        }
        if (primo == 0) cout << X << " eh primo\n";
        else cout << X << " nao eh primo\n";

    }

    return 0;
}
