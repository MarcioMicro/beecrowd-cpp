#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double H, P;
    cin >> H >> P;

    cout << fixed << setprecision(2) << H/P << endl;

    return 0;
}
