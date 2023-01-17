#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, q, r;
    cin >> a >> b;

    r = a%b;
    if (r<0) r+=abs(b);
    q = (a-r)/b;

    cout << q << " " << r << endl;


}
