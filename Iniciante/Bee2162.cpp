#include <iostream>

using namespace std;

int main() {

    int N, ant;
    bool padrao=true, sobe=true;

    cin >> N;
    int h[N];

    for (int i=0; i<N; i++) {
        cin >> h[i];
    }

    if (h[0] > h[1]) sobe = false;
    if (h[0] == h[1]) padrao = false;

    for (int i=2; i<N; i++) {
        if (sobe) {
            if (h[i] >= h[i-1]) padrao = false;
        } else {
            if (h[i] <= h[i-1]) padrao = false;
        }
        sobe = !sobe;
    }

    if (padrao) cout << 1 << endl;
    else cout << 0 << endl;


    return 0;
}
