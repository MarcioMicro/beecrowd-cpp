#include <iostream>

using namespace std;

int main() {

    int T, A, B, C, D, E, acertos=0;
    cin >> T >> A >> B >> C >> D >> E;

    if (T==A) acertos++;
    if (T==B) acertos++;
    if (T==C) acertos++;
    if (T==D) acertos++;
    if (T==E) acertos++;

    cout << acertos << endl;

    return 0;
}
