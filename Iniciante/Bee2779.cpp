#include <iostream>

using namespace std;

int main() {

    int N, M, index, total=0;

    cin >> N >> M;

    int X[N]={0};

    for (int i=0; i<M; i++) {
        cin >> index;
        X[index-1]++;
    }

    for (int i=0; i<N; i++) {
        if (X[i] == 0) total++;
        //cout << X[i] << " ";
    }

    cout << total << endl;

    return 0;
}
