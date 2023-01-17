#include <iostream>
#include <iomanip>

using namespace std;

double media (double a, double b, double c) {
     return (a*2 + b*3 + c*5)/10.0;
}

int main() {

    double A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(1) << "MEDIA = " << media(A, B, C) << endl;


    return 0;
}
