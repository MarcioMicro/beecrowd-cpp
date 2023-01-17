#include<iostream>

using namespace std;

int fib(int i) {

    if (i==0) return 0;
    else if (i<3) return 1;
    return fib(i-2) + fib(i-1);
}

int main() {

    int N, i=0;
    cin >> N;

    while (i<N) {
        if (i==0) cout << fib(i);
        else cout <<" " << fib(i);
        i++;
    }
    cout << endl;

    return 0;
}
