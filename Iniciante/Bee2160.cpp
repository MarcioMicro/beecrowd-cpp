#include <iostream>

using namespace std;

int main() {

    string L;
    getline(cin, L);

    if (L.size()<=80) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
