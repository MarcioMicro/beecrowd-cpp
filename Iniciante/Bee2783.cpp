#include <iostream>
#include <set>

using namespace std;

int main() {

    int N, C, M, count = 0;
    
    cin >> N >> C >> M;

    set<int> stamped;
    set<int> purchased;

    for (int i=0; i<C; i++) {
        int sticker;
        cin >> sticker;
        stamped.insert(sticker);
    }

    for (int i=0; i<M; i++) {
        int sticker;
        cin >> sticker;
        purchased.insert(sticker);
    }

    for (int sticker : stamped) {
        if (purchased.count(sticker)) count++;
    }

    cout << C - count << endl;

    return 0;
}
