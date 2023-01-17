#include <iostream>

using namespace std;

int main() {

    int T, N[1000], a=0;
    cin >> T;

    for (int i=0; i<1000; i++) {
        if (a==T) a=0;
        N[i] = a;
        cout << "N[" << i << "] = " << N[i] << endl;
        a++;
        }

    return 0;
}
