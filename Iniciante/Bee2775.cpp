#include <iostream>

using namespace std;

int main() {

    int N;

    while (cin >> N) {
        int p[N], t[N], temp, tempoTotal=0;
        for (int i=0; i<N; i++) cin >> p[i];
        for (int i=0; i<N; i++) cin >> t[i];

        for (int i=0; i<N-1; i++) {
            for (int j=0; j<N-i-1; j++) {
                if (p[j] > p[j+1]) {
                    temp = p[j];
                    p[j] = p[j+1];
                    p[j+1] = temp;
                    temp = t[j];
                    t[j] = t[j+1];
                    t[j+1] = temp;
                    tempoTotal += t[j];
                    tempoTotal += t[j+1];
                }
            }
        }

        cout << tempoTotal << endl;
    }

    return 0;
}
