#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    unordered_map<int, int> glasses;
    int bean;

    for (int i=1; i < 5; i++) {
        cin >> bean;
        glasses[bean] = i;
    }

    cout << glasses[1] << endl;

    return 0;
}