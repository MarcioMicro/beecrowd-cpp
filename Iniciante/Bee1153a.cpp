#include<iostream>
#include<iomanip>

using namespace std;

int fatorial(int a) {

    if (a<2) return 1;

    return a*fatorial(a-1);
}

int main() {

    int A;
    cin >> A;

    cout << fatorial(A) << endl;

    return 0;
}
