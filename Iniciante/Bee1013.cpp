#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c, MaiorAB;

    cin >> a >> b >> c;

    MaiorAB = (a+b+abs(a-b))/2;

    cout << (MaiorAB+c+abs(MaiorAB-c))/2 << " eh o maior" << endl;

    return 0;
}
