#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int T, w, h, x0, y0, N, xMagia, yMagia, dano, alcance;
    double distancia;
    string magia;
    cin >> T;

    while (T--) {
        cin >> w >> h >> x0 >> y0;
        cin >> magia >> N >> xMagia >> yMagia;

        if (magia == "fire") {
            dano = 200;
            if (N == 1) alcance = 20;
            else if (N == 2) alcance = 30;
            else alcance = 50;
        }
        else if (magia == "water") {
            dano = 300;
            if (N == 1) alcance = 10;
            else if (N == 2) alcance = 25;
            else alcance = 40;
        }
        else if (magia == "earth") {
            dano = 400;
            if (N == 1) alcance = 25;
            else if (N == 2) alcance = 55;
            else alcance = 70;
        }
        else if (magia == "air") {
            dano = 100;
            if (N == 1) alcance = 18;
            else if (N == 2) alcance = 38;
            else alcance = 60;
        }

        if (xMagia>=x0 && xMagia<=x0+w && yMagia>=y0 && yMagia<=y0+h) {
            cout << dano << endl;
        }
        else if (xMagia>=x0 && xMagia<=x0+w) {
            if (yMagia <= y0) {
                if (y0-yMagia <= alcance) cout << dano << endl;
                else cout << 0 << endl;
            }
            else {
                if (yMagia - (y0+h) <= alcance) cout << dano << endl;
                else cout << 0 << endl;
            }
        }
        else if (yMagia>=y0 && yMagia<=y0+h) {
            if (xMagia <= x0) {
                if (x0-xMagia <= alcance) cout << dano << endl;
                else cout << 0 << endl;
            }
            else {
                if (xMagia - (x0+w) <= alcance) cout << dano << endl;
                else cout << 0 << endl;
            }
        }
        else {
            if (xMagia < x0) {
                if (yMagia > y0+h) {
                    distancia = sqrt(pow(xMagia-x0,2)+pow(yMagia-(y0+h),2));
                }
                else if (yMagia < y0) {
                    distancia = sqrt(pow(xMagia-x0,2)+pow(yMagia-y0,2));
                }
            }
            else if (xMagia > x0+w) {
                if (yMagia > y0+h) {
                    distancia = sqrt(pow(xMagia-(x0+w),2)+pow(yMagia-(y0+h),2));
                }
                else if (yMagia < y0) {
                    distancia = sqrt(pow(xMagia-(x0+w),2)+pow(yMagia-y0,2));
                }
            }

            if (distancia <= alcance) cout << dano << endl;
            else cout << 0 << endl;
        }

    }


    return 0;
}
