#include <iostream>

using namespace std;

int main() {

    int N[10];
    cin >> N[0];
    cout << "N[0] = " << N[0] << endl;

    for (int i=1; i<10;i++) {
        N[i] = N[i-1]*2;
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
