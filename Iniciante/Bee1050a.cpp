#include<iostream>
#include<iomanip>

using namespace std;

string ddd(string a) {

    int indice;

    string cidades[16] = {
        "61", "Brasilia",
        "71", "Salvador",
        "11", "Sao Paulo",
        "21", "Rio de Janeiro",
        "32", "Juiz de Fora",
        "19", "Campinas",
        "27", "Vitoria",
        "31", "Belo Horizonte"
    };

    for (int i=0; i<16; i+=2) {
        if (a == cidades[i]) return cidades[i+1];
    }
    return "DDD nao cadastrado";
}

int main() {

    string A;
    cin >> A;

    cout << ddd(A) << endl;

    return 0;
}
