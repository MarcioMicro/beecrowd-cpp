#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

int main() {

    int N, maior;
    cin >> N;
    cin.get();
    string linha;

    while (N!=0) {
        maior = 0;
        string palavra[N], nova[N];
        for (int i=0; i< N; i++) {
            getline(cin, linha);

            stringstream ss(linha);

            while (ss >> palavra[i]) {
                if (nova[i] != "") nova[i] += " ";
                nova[i] += palavra[i];
            }
            if (nova[i].length() > maior) maior = nova[i].length();
        }

        for (int i=0; i< N; i++) {
            cout << setw(maior) << nova[i] << endl;
            nova[i].erase();
        }

        cin >> N;
        cin.get();
        if (N!=0) cout << endl;
    }

    return 0;
}
