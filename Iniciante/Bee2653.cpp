#include<iostream>
#include<set>

using namespace std;

int main() {

    string tesouro;
    set<string> tesouros;

    while (cin >> tesouro) {
        tesouros.insert(tesouro);
    }

    cout << tesouros.size() << endl;


    return 0;
}
