#include <iostream>

using namespace std;

int main() {

    int N, cont=0;

    for (int i=0; i<5; i++) {
        cin >> N;
        if (N%2==0) {
            cont ++;
        }
    }
    cout << cont << " valores pares" << endl;

    return 0;
}
