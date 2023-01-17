#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    if (N%2==0) N++;

    for (int i=N; i<=N+11; i+=2) {
        cout << i << endl;
    }

    return 0;
}
