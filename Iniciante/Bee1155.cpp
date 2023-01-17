#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double S=1;

    for (int i=2; i<=100; i++) S += 1.0/i;

    cout << fixed << setprecision(2) << S << "\n";

    return 0;
}
