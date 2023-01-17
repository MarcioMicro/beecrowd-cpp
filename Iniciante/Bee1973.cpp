#include <iostream>

using namespace std;

int main() {

    int64_t N, total=0, i, estrelas=0, proximoi;
    ios_base::sync_with_stdio(false);
    cin >> N;
    int64_t X[N];

    for (i=0; i<N; i++) {
        cin >> X[i];
        total += X[i];
    }

    i = 0;
    while (i>=0 && i<N) {
        if (X[i]%2 == 0) proximoi = i - 1;
        else  proximoi = i + 1;

        if (X[i]>0) {
            X[i]--;
            total--;
            if (i>estrelas) estrelas = i;
        }

        i = proximoi;

    }

    cout << estrelas+1 << " " << total << endl;

   return 0;
}
