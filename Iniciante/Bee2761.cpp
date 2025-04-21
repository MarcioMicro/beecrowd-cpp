#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int A;
    float B;
    char C;
    string D;

    cin >> A >> B >> C;
    cin.ignore();
    getline(cin, D);

    cout << fixed << setprecision(6) << A << B << C << D << endl;
    cout << A << "\t" << B << "\t" << C << "\t" << D << endl;
    cout << setw(10) << A << setw(10) << B << setw(10) << C << setw(10) << D << endl;

    return 0;
}
