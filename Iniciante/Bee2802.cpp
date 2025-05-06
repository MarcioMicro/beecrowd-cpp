#include <iostream>

using namespace std;

int main() {

    int N, areas;

    cin >> N;

    areas = 1 + (((N-1)*N)/2) + (((N)*(N - 1)*(N - 2 )*(N - 3))/24);

    cout << areas;

    return 0;
}