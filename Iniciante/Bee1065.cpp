#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int  num[5] , pares = 0;

    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] ;

    for ( int i=0 ; i < 5 ; i++) {
        if (num[i] % 2 == 0) {
            pares++;
        }
    }

    cout << pares << " valores pares\n";

    return 0;
}
