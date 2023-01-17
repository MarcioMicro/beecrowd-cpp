#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int val[N];

    for (int i=0; i<N; i++) cin >> val[i];

    for (int i=0; i<N; i++) {
        if (val[i] == 0) cout << "NULL" << endl;
        else if (val[i] % 2 == 0 and val[i] > 0)  cout << "EVEN POSITIVE" << endl;
        else if (val[i] % 2 == 0 and val[i] < 0)  cout << "EVEN NEGATIVE" << endl;
        else if (val[i] % 2 != 0 and val[i] > 0)  cout << "ODD POSITIVE" << endl;
        else if (val[i] % 2 != 0 and val[i] < 0)  cout << "ODD NEGATIVE" << endl;
    }


    return 0;
}
