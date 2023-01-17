#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double A, B, C, delta;

    cin >> A >> B >> C;

    delta = pow(B,2) - 4*A*C;

    if(delta < 0) {

        cout << "Impossivel calcular" << endl;

    }

    else if (A==0){

        cout << "Impossivel calcular" << endl;

    }


    else {

        cout << fixed << setprecision(5) << "R1 = " << (-B + sqrt(delta))/(2*A) << endl;
        cout << fixed << setprecision(5) << "R2 = " << (-B - sqrt(delta))/(2*A) << endl;

    }


    return 0;
}
