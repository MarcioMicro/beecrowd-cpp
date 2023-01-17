#include <iostream>

using namespace std;

int main() {

    int N, L, m2=0, m3=0, m4=0, m5=0;
    cin >> N;

    for (int i=0; i<N; i++) {
        cin >> L;
        if (L%2==0) m2++;
        if (L%3==0) m3++;
        if (L%4==0) m4++;
        if (L%5==0) m5++;
    }

    cout << m2 << " Multiplo(s) de 2\n" << m3 << " Multiplo(s) de 3\n"
    << m4 << " Multiplo(s) de 4\n" << m5 << " Multiplo(s) de 5\n";

    return 0;
}
