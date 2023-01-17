#include <iostream>
#include <iomanip>

using namespace std;

double media (double a, double b) {
     double res = (a*3.5 + b*7.5)/11.0;
     if (res > 10) return 10.0;
     else return res;
}

int main() {

    double A, B;
    cin >> A >> B;

    cout << fixed << setprecision(5) << "MEDIA = " << media(A, B) << endl;


    return 0;
}
