#include <iostream>

using namespace std;

int main() {

    int N, LA, LB, SA, SB;
    cin >> N >> LA >> LB >> SA >> SB;

    if (N>=LA && N<= LB && N>=SA && N<=SB) cout << "possivel\n";
    else cout << "impossivel\n";

    return 0;
}
