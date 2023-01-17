#include <iostream>

using namespace std;

int main() {

    string T;
    getline (cin, T);

    if (T.length()<=140) cout << "TWEET\n";
    else cout << "MUTE\n";

    return 0;
}
