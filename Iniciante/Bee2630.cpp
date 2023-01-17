#include <iostream>

using namespace std;

int main() {

    int N, R, G, B, P;
    string metodo;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> metodo >> R >> G >> B;
        if (metodo == "eye") P = 0.3*R+0.59*G+0.11*B;
        else if (metodo == "mean") P = (R+G+B)/3;
        else if (metodo == "max") {
            P = R;
            if (P<G) P = G;
            if (P<B) P = B;
        }
        else if (metodo == "min") {
            P = R;
            if (P>G) P = G;
            if (P>B) P = B;
        }
        cout << "Caso #" << i+1 << ": " << P << endl;
    }

    return 0;
}
