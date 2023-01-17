#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int N, H, M, O;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> H >> M >> O;
        cout << setw(2) << setfill('0') << H << ":" << setw(2) << setfill('0') << M << " - ";
        if (O==0) cout << "A porta fechou!\n";
        else cout << "A porta abriu!\n";
    }


    return 0;
}
