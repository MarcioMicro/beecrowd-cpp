#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double R, pi=3.14159;

    cin >> R;

    cout << "VOLUME = " << fixed << setprecision(3) << 4/3.0 * pi * pow(R,3) <<endl;

    return 0;
}
