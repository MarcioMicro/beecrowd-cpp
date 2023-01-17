#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double A , B;

    cin >> A;
    cin >> B;

    cout << "MEDIA = " << fixed << setprecision(5) << A*3.5/11 + B*7.5/11 << endl;

    return 0;
}
