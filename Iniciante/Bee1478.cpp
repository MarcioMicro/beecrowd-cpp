#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int N;
    cin >> N;

    while (N!=0) {
        int matriz[N][N];

        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                matriz[i][j] = abs(i-j) + 1;
                cout << setfill(' ') << setw(3) << matriz[i][j];
                if (j<N-1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
        cin >> N;
    }


    return 0;

}
