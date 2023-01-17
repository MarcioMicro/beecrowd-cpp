#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    long long unsigned int P;
    cin >> P;

    while (P != -1) {
        if (P == 0) P = 1;
        cout << P-1 << endl;
        cin >> P;
    }

    return 0;
}
