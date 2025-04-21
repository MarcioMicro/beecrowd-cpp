#include <iostream>

using namespace std;

int main() {

    int N, input, oldInput=0, sum=1, diff, oldDiff;

    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> input;
        if (i==0) oldInput = input;
        else if (i==1) {
            oldDiff = input - oldInput;
            oldInput = input;
        }
        else {
            diff = input - oldInput;

            if (diff != oldDiff) sum++;

            oldDiff = diff;
            oldInput = input;
        }
    }

    cout << sum << endl;

    return 0;
}
