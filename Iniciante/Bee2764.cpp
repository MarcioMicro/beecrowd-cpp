#include <iostream>
#include <string>

using namespace std;

int main() {

    string data, dd, mm, aa;
    int pos;

    cin >> data;

    pos = data.find('/');
    dd = data.substr(0, pos);
    data = data.substr(pos+1);
    pos = data.find('/');
    mm = data.substr(0, pos);
    aa = data.substr(pos+1);

    cout << mm << "/" << dd << "/" << aa << endl;
    cout << aa << "/" << mm << "/" << dd << endl;
    cout << dd << "-" << mm << "-" << aa << endl;

    return 0;
}
