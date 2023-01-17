#include <iostream>
#include <iomanip>

using namespace std;

int diferenca (int a, int b, int c, int d) {
    return (a*b - c*d);
}


int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    cout << "DIFERENCA = " << diferenca (A, B, C, D) << endl;

    return 0;
}
