#include <iostream>

using namespace std;

int main() {

    int X;

    while (1) {
        cin >> X;
        if (X>0) {
            for (int i=1; i<X; i++) {
                cout << i << " ";
            }
            cout << X << "\n";
        } else break;
    }

    return 0;
}
