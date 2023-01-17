#include<iostream>
#include<iomanip>

using namespace std;

int produto(int a, int b) {

    return a * b;

}

int main() {

    int A, B;
    cin >> A >> B;

    cout << "PROD = " << produto(A, B) << endl;

    return 0;
}
