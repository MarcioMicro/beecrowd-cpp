#include <iostream>

using namespace std;

int main() {

    int N, h, m, s;

    cin >> N;

    h = N / 3600;
    N = N % 3600;
    m = N / 60;
    N = N % 60;

    cout << h << ":" << m << ":" << N << endl;

    return 0;
}
