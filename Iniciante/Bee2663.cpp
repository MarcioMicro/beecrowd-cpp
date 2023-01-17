#include <iostream>

using namespace std;

int main() {

    int N, K, cont=0;
    cin >> N >> K;

    int nota[N];

    for (int i=0; i<N; i++) {
        cin >> nota[i];
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (nota[i] > nota[j]) swap(nota[i],nota[j]);
        }
    }

    for (int i=K; i<N; i++) {
        if (nota[i] == nota[K-1]) cont++;
    }

    cout << K+cont << endl;

    return 0;
}
