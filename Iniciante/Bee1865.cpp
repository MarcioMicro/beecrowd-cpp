#include <iostream>

using namespace std;

int main() {

    int N, strong;
    string name;

    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> name >> strong;
        if (name == "Thor") cout << "Y\n";
        else cout << "N\n";
    }

    return 0;
}
