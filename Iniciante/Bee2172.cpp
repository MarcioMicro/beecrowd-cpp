#include <iostream>

using namespace std;

int main() {

    int64_t X, M;
    cin >> X >> M;

    while (X!=0 || M!=0) {
        cout << X*M << endl;
        cin >> X >> M;
    }

    return 0;
}
