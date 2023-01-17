#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    double M;
    int horario, hora, min, seg;

    while (cin >> M) {
        if (M>=0 && M<90 || M==360) cout << "Bom Dia!!\n";
        else if (M>=90 && M<180) cout << "Boa Tarde!!\n";
        else if (M>=180 && M<270) cout << "Boa Noite!!\n";
        else if (M>=270 && M<360) cout << "De Madrugada!!\n";

        horario = (86400 * M) / 360 + 21600;
        cout << setw(2) << setfill('0') << (horario / (60*60))%24 << ":";
        cout << setw(2) << setfill('0') << (horario / 60)%60 << ":";
        cout << setw(2) << setfill('0') << horario%60 << "\n";
    }

    return 0;
}
