#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int tempo, velocidade;

    cin >> tempo >> velocidade;

    cout << fixed << setprecision(3) << (velocidade*tempo)/12.0 << endl;

    return 0;
}
