#include <iostream>

using namespace std;

int main() {

    double num[6];
    int pos = 0;

    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] ;

    for ( int i=0 ; i < 6 ; i++) {
        if (num[i] > 0) pos++;
    }

    cout << pos << " valores positivos\n";

    return 0;
}
