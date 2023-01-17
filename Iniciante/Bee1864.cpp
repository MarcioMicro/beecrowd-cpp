#include <iostream>

using namespace std;

int main() {

    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        cout << frase[i];
    }
    cout << "\n";

    return 0;
}
