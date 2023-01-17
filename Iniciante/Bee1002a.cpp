#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double media (double a) {
     double n = 3.14159;
     return n*pow(a,2);
}

int main() {

    double raio;
    cin >> raio;

    cout << fixed << setprecision(4) << "A=" << media(raio) << endl;


    return 0;
}
