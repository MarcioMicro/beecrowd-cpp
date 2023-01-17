#include<iostream>
#include<sstream>

using namespace std;

int main() {

    int N;
    string linha, palavra, codigo;
    cin >> N;
    cin.get();

    while (N) {
        codigo = "";
        getline(cin, linha);
        stringstream ss(linha);
        while (ss >> palavra) {
            codigo += palavra[0];
        }
        cout << codigo << endl;

        N--;
    }

    return 0;
}
