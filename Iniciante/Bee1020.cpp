#include <iostream>

using namespace std;

int main() {

    int idade, a, m;

    cin >> idade;

    a = idade / 365;
    idade = idade % 365;
    m = idade / 30;
    idade = idade % 30;

    cout << a << " ano(s)" << endl << m << " mes(es)" << endl << idade << " dia(s)" << endl;

    return 0;
}
