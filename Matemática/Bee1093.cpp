#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double EV1, EV2, AT, D;
    double n1, n2;
    cin >> EV1 >> EV2 >> AT >> D;

    while (EV1!=0 || EV2!=0 || AT!=0 || D!=0) {
        n1 = ceil(EV1/D);
        n2 = ceil(EV2/D);
        if (AT == 3) cout << fixed << setprecision(1) << ((double)n1/(n1+n2))*100.0 << endl;
        else cout << fixed << setprecision(1) << ((1-(pow((6.0-AT)/AT,n1)))/(1-pow((6-AT)/AT, (n1+n2))))*100.0 << endl;
        cin >> EV1 >> EV2 >> AT >> D;
    }

    return 0;
}
