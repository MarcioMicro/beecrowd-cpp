#include <iostream>

using namespace std;

int main() {

    int T, B, AiD, DiD, LiD, golpeD, AiG, DiG, LiG, golpeG;
    cin >> T;

    for (int i=0; i<T; i++) {
        cin >> B >> AiD >> DiD >> LiD >> AiG >> DiG >> LiG;
        golpeD = (AiD + DiD) / 2;
        golpeG = (AiG + DiG) / 2;
        if (LiD % 2 == 0) golpeD += B;
        if (LiG % 2 == 0) golpeG += B;
        if (golpeD > golpeG) cout << "Dabriel\n";
        else if (golpeD < golpeG) cout << "Guarte\n";
        else cout << "Empate\n";
    }

    return 0;
}
