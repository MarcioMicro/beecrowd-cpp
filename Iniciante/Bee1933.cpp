#include <iostream>

using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B;

    if (A==B || A > B) C = A;
    else C = B;

    cout << C << endl;

    return 0;
}
