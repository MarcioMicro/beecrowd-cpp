#include <iostream>
#include <string>

using namespace std;

int main() {

    string cpf, p1, p2, p3, p4;
    int pos;

    cin >> cpf;

    pos = cpf.find('.');
    p1 = cpf.substr(0, pos);
    cpf = cpf.substr(pos+1);
    pos = cpf.find('.');
    p2 = cpf.substr(0, pos);
    cpf = cpf.substr(pos+1);
    pos = cpf.find('-');
    p3 = cpf.substr(0, pos);
    p4 = cpf.substr(pos+1);

    cout << p1 << endl << p2 << endl << p3 << endl << p4 << endl;

    return 0;
}
