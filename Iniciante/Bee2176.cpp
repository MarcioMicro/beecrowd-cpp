#include <iostream>

using namespace std;

int main() {

    string S;
    int cont=0;
    cin >> S;

    for (int i=0; i<S.length(); i++) {
        if (S[i] == '1') {
            cont ++;
        }
    }
    if (cont%2 == 0) cout << S + '0' << endl;
    else cout << S + '1' << endl;

    return 0;
}
