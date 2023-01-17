#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    if (A<B) swap(A,B);
    if (A<C) swap(A,C);
    if (B<C) swap(B,C);

    if (A == B || A == B+C) cout << "S\n";
    else if (B == C) cout << "S\n";
    else cout << "N\n";

    return 0;
}
