#include <iostream>

using namespace std;

int main() {



    int di , df , W , hi , hf , X , mi , mf , Y , si , sf , Z, cont;
    string texto;


    cin >> texto >> di >> hi >> texto >> mi >> texto >> si;
    cin >> texto >> df >> hf >> texto >> mf >> texto >> sf;


    cont = (sf-si) + (mf-mi)*60 + (hf-hi)*60*60 + (df-di)*60*60*24;
    if (cont<60) {
        W = 0;
        X = 0;
        Y = 1;
        Z = 0;
    } else {
    W = cont / (60*60*24);
    cont = cont % (60*60*24);
    X = cont / (60*60);
    cont = cont % (60*60);
    Y = cont / 60;
    Z = cont % 60;
    }



    cout << W << " dia(s)" << endl << X << " hora(s)" << endl << Y << " minuto(s)" << endl << Z << " segundo(s)" << endl;



    return 0;
}
