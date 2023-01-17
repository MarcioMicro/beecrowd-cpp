#include <iostream>

using namespace std;

int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (A>B) {
        A = A + B;
        B = A - B;
        A = A - B;
    }
    if (B>C) {
        B = B + C;
        C = B - C;
        B = B - C;
    }
    if (C>D) {
        C = C + D;
        D = C - D;
        C = C - D;
    }
    if (A>B) {
        A = A + B;
        B = A - B;
        A = A - B;
    }
    if (B>C) {
        B = B + C;
        C = B - C;
        B = B - C;
    }
    if (A>B) {
        A = A + B;
        B = A - B;
        A = A - B;
    }

    if (A+B > C || B+C > D) cout << "S\n";
    else cout << "N\n";

    return 0;
}
