#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double A, B, C;

    cin >> A >> B >> C;

    if (A >= B+C || B >= A+C || C >= A+B) {

        cout << fixed << setprecision(1) << "Area = " << (A+B)*C/2 << endl;

    }

    else {


        cout << fixed << setprecision(1) << "Perimetro = " << A+B+C << endl;

    }

    return 0;
}
