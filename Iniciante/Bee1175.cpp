#include <iostream>

using namespace std;

int main() {

    int N[20];

    for (int i=0; i<20; i++) cin >> N[i];

    for (int i=0; i<10; i++) {
        N[i] = N[i] + N[19-i];
        N[19-i] = N[i] - N[19-i];
        N[i] = N[i] - N[19-i];
    }

    for (int i=0; i<20; i++) cout << "N[" << i << "] = " << N[i] << endl;

    return 0;
}
