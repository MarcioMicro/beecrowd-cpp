#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double S=1;

    for (double i=1, j=1; i<=39; i+=2) {
        j *= 2;
        S += (i+2)/(j);
    }

    cout << fixed << setprecision(2) << S << "\n";

    return 0;
}
