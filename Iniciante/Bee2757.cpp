#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int A, B, C;
    cin >> A >> B >> C;

    cout << "A = " << A << ", B = " << B << ", C = " << C <<endl;
    cout << "A = " << setw(10) << A << ", B = " << setw(10) << B << ", C = " << setw(10) << C <<endl;
    cout << "A = " << setw(10) << setfill('0') << internal << A << ", B = " << setw(10) << B << ", C = " << setw(10) << C <<endl;
    cout << setfill(' ') << "A = " << setw(10) << left << A << ", B = " << setw(10) << B << ", C = " << setw(10) << C <<endl;

    return 0;
}
