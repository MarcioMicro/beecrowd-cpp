#include <iostream>

using namespace std;

int main() {

    int N, i;
    string alfabeto;

    while (cin >> alfabeto >> N) {
        for (int j=0; j<N; j++) {
            cin >> i;
            cout << alfabeto[i-1];
        }
        cout << endl;
    }

    return 0;
}
