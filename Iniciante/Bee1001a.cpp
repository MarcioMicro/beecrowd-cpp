#include<iostream>
#include<iomanip>

using namespace std;

int soma(int a, int b) {

    return a + b;

}

int main() {

    int A, B;
    cin >> A >> B;

    cout << "X = " << soma(A, B) << endl;

    return 0;
}
