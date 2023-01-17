#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;
    if (N/1000 == 1) cout <<"M";
    N %= 1000;
    if (N/100 == 1) cout <<"C";
    else if (N/100 == 2) cout <<"CC";
    else if (N/100 == 3) cout <<"CCC";
    else if (N/100 == 4) cout <<"CD";
    else if (N/100 == 5) cout <<"D";
    else if (N/100 == 6) cout <<"DC";
    else if (N/100 == 7) cout <<"DCC";
    else if (N/100 == 8) cout <<"DCCC";
    else if (N/100 == 9) cout <<"CM";
    N %= 100;

    if (N/10 == 1) cout <<"X";
    else if (N/10 == 2) cout <<"XX";
    else if (N/10 == 3) cout <<"XXX";
    else if (N/10 == 4) cout <<"XL";
    else if (N/10 == 5) cout <<"L";
    else if (N/10 == 6) cout <<"LX";
    else if (N/10 == 7) cout <<"LXX";
    else if (N/10 == 8) cout <<"LXXX";
    else if (N/10 == 9) cout <<"XC";
    N %= 10;

    if (N/1 == 1) cout <<"I";
    else if (N/1 == 2) cout <<"II";
    else if (N/1 == 3) cout <<"III";
    else if (N/1 == 4) cout <<"IV";
    else if (N/1 == 5) cout <<"V";
    else if (N/1 == 6) cout <<"VI";
    else if (N/1 == 7) cout <<"VII";
    else if (N/1 == 8) cout <<"VIII";
    else if (N/1 == 9) cout <<"IX";

    cout << endl;

    return 0;
}
