#include <iostream>
#include <cmath>

using namespace std;

int maiorAB(int a, int b) {
    return (a + b + abs(a-b))/2;
}

int main() {

    int A, B, C, maior;

    cin >> A >> B >> C;

    maior = maiorAB(A,B);
    maior = maiorAB(maior,C);

    cout << maior << " eh o maior" << endl;

    return 0;
}
