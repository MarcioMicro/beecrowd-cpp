#include <iostream>

using namespace std;

int main() {

    int C, B, P, Cr, Br, Pr, N=0;
    cin >> C >> B >> P >> Cr >> Br >> Pr;

    if (C < Cr) N += Cr - C;
    if (B < Br) N += Br - B;
    if (P < Pr) N += Pr - P;

    cout << N << endl;

    return 0;
}
