#include <iostream>

using namespace std;

int main() {

    int T, N;
    int64_t fib[61];
    fib[0] = 0;
    fib[1] = 1;
    for (int i=2; i<61; i++) fib[i] = fib[i-2] + fib[i-1];

    cin >> T;

    for (int i=0; i<T; i++) {
        cin >> N;
        cout << "Fib(" << N << ") = " << fib[N] << endl;
    }


    return 0;
}
