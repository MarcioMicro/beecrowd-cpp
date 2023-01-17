#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    if (A>B) {
        if (B<=C || A-B > B-C) cout << ":)\n";
        else cout << ":(\n";
    }
    else if (A<B) {
        if (B>=C || B-A > C-B) cout << ":(\n";
        else cout << ":)\n";
    }
    else {
        if (B<C) cout << ":)\n";
        else cout << ":(\n";
    }

    return 0;
}
