#include <iostream>
#include <string>

using namespace std;

int main() {

    string entrada, inteiro, decimal;
    int pos, intInteiro, intDecimal;

    cin >> entrada;

    pos = entrada.find('.');

    inteiro = entrada.substr(0, pos);
    decimal = entrada.substr(pos+1);

    intInteiro = stoi(inteiro);
    intDecimal = stoi(decimal);

    cout << intDecimal << "." << intInteiro << endl;


    return 0;
}
