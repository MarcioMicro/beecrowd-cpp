#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double A, B, C, a, b, c;

    while (cin >> A >> B >> C) {

        a=A;
        b=B;
        c=C;

        if (A<B) {
            A=b;
            B=a;
        }

        if (A<C) {
            C=A;
            A=c;
        }

        if (A >= B+C) {
            cout << "NAO FORMA TRIANGULO" << endl;
        }

        else {
            if (pow(A,2) == (pow(B,2)+pow(C,2))) {
                cout << "TRIANGULO RETANGULO" << endl;
            } else if (pow(A,2) > (pow(B,2)+pow(C,2))) {
                cout << "TRIANGULO OBTUSANGULO" << endl;
            } else if (pow(A,2) < (pow(B,2)+pow(C,2))) {
                cout << "TRIANGULO ACUTANGULO" << endl;
            }

            if (A==B and A==C) {
                cout << "TRIANGULO EQUILATERO" << endl;
            }

            else if (A==B || A==C || B==C) {
                cout << "TRIANGULO ISOSCELES" << endl;
            }



        }
    }
    return 0;
}
