#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    string T;
    int C;
    cin >> C;

    for (int i=0; i<C; i++) {
        cin >> T;
        cout << fixed << setprecision(2) << T.size()/100.0 << endl;
    }


    return 0;
}
