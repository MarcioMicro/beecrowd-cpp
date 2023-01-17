#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, x, i;

    while (cin >> N) {
        i = x = 0;
        while (x <= N) {
            x = pow(2,i+1);
            i++;
        }
        cout << i-1 << endl;
    }

    return 0;
}
