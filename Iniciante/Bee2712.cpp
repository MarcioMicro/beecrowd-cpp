#include<iostream>

using namespace std;


bool validador(string placa) {

    if (placa.length() > 8) return false;

    for (int i=0; i<3; i++) {
        if (placa[i] < 'A' || placa[i] > 'Z') return false;
    }
    if (placa[3] != '-') return false;
    for (int i=4; i<8; i++) {
        if (placa[i] < '0' || placa[i] > '9') return false;
    }
    return true;
}

string restricao(string placa) {
    if (placa[7] == '1' || placa[7] == '2') return "MONDAY";
    if (placa[7] == '3' || placa[7] == '4') return "TUESDAY";
    if (placa[7] == '5' || placa[7] == '6') return "WEDNESDAY";
    if (placa[7] == '7' || placa[7] == '8') return "THURSDAY";
    if (placa[7] == '9' || placa[7] == '0') return "FRIDAY";
    return "FAILURE";
}

int main() {

    int N;
    cin >> N;
    string placa[N];

    for (int i=0; i<N; i++) {
        cin >> placa[i];
        if (validador(placa[i]) == true) cout << restricao(placa[i]) << endl;
        else cout << "FAILURE\n";
    }

    return 0;
}
