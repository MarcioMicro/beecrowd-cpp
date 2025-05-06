#include <iostream>
#include <vector>

using namespace std;

int iccanobif(int i) {
    if (i < 2) return 1;

    return iccanobif(i-2) + iccanobif(i-1);
}

int main() {

    int N;
    vector<int> sequence(N);

    cin >> N;

    for (int i=0; i<N; i++) {
        sequence.push_back(iccanobif(i));
    }

    bool first = true;
    for (auto it = sequence.rbegin(); it != sequence.rend(); ++it) {
        if (!first) cout << " ";
        first = false;
        cout << *it;
    }

    cout << endl;

    return 0;
}