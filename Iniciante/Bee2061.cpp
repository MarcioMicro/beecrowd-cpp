#include <iostream>

using namespace std;

int main() {

    int N, M;
    string a;

    cin >> N >> M;

    for (int i=0; i<M; i++) {
        cin >> a;
        if (a == "fechou") N++;
        else if (a == "clicou") N--;
    }

    cout << N << "\n";

    return 0;
}
