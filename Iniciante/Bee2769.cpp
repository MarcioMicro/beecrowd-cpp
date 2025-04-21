#include <iostream>
#include <vector>

using namespace std;

int etapas(int N, vector<int> a1, vector<int> a2, vector<int> t1, vector<int> t2, int e1, int e2, int x1, int x2) {
    vector<int> line1(N), line2(N);

    line1[0] = e1 + a1[0];
    line2[0] = e2 + a2[0];

    //cout << 1 << " - " << line1 << " " << line2 << endl;

    for(int i=1; i<N; i++) {
        line1[i] = min(line1[i-1]+a1[i], line2[i-1]+t2[i-1]+a1[i]);
        line2[i] = min(line2[i-1]+a2[i], line1[i-1]+t1[i-1]+a2[i]);
        //cout << 1 << " - " << line1 << " " << line2 << endl;
    }

    return min(line1[N-1]+x1, line2[N-1]+x2);
}

int main() {

    int N;

    while (cin >> N) {
        vector<int> a1(N), a2(N), t1(N), t2(N);
        int e1, e2, x1, x2;

        cin >> e1 >> e2;
        for (int i=0; i<N; i++)  cin >> a1[i];
        for (int i=0; i<N; i++)  cin >> a2[i];
        for (int i=0; i<N-1; i++)  cin >> t1[i];
        for (int i=0; i<N-1; i++)  cin >> t2[i];
        cin >> x1 >> x2;

        cout << etapas(N, a1, a2, t1, t2, e1, e2, x1, x2) << endl;
    }

    return 0;
}
