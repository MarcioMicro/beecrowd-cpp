#include <iostream>

using namespace std;

int main() {

    int N, Q, p;

    while (cin >> N >> Q) {
        int n[N];
        for (int i=0; i<N; i++) {
            cin >> n[i];
        }
        for (int i=0; i<N; i++) {
            for (int j=1; j<N; j++) {
                if (n[j-1] < n[j]) swap(n[j-1], n[j]);
            }
        }
        for (int i=0; i<Q; i++) {
            cin >> p;
            cout << n[p-1] <<endl;
        }

    }

    return 0;
}
