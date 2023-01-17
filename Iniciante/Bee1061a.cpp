#include <iostream>

using namespace std;

int main() {



    int di , df , W , hi , hf , X , mi , mf , Y , si , sf , Z, cont;
    string texto;


    cin >> texto >> di >> hi >> texto >> mi >> texto >> si;
    cin >> texto >> df >> hf >> texto >> mf >> texto >> sf;




    Z = sf-si;
    Y = mf-mi;
    X = hf-hi;
    W = df-di;

    if (Z<0) {
        Z+=60;
        Y--;
    }
    if (Y<0) {
        Y+=60;
        X--;
    }
    if (X<0) {
        X+=24;
        W--;
    }

    cout << W << " dia(s)" << endl << X << " hora(s)" << endl << Y << " minuto(s)" << endl << Z << " segundo(s)" << endl;



    return 0;
}
