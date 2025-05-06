#include <iostream>

using namespace std;

int main() {

    int L, C, color;

    cin >> L >> C;

    color = ((L + C) % 2 == 0) ? 1 : 0;

    cout << color << endl;

    return 0;
}