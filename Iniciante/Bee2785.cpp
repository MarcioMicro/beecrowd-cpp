#include <iostream>
#include <climits>

using namespace std;

int matrix[100][100];
int memo[100][100][100] = {0};
bool calculated[100][100][100] = {false};
int totalWeigh = INT_MAX;

void arranje(int N, int begin, int end, int line, int weigh) {
    
    if (begin < 0 || end >= N || line >= N) return;

    if (calculated[begin][end][line] && memo[begin][end][line] <= weigh) return;

    calculated[begin][end][line] = true;
    memo[begin][end][line] = weigh;

    for (int i = begin; i <= end; i++) {
        weigh += matrix[line][i];
    }

    if (line == N - 1) {
        if (weigh < totalWeigh) totalWeigh = weigh;
        return;
    }
    
    arranje(N, begin - 1, end, line + 1, weigh);
    arranje(N, begin, end + 1, line + 1, weigh);    
}

int main() {

    int N;

    cin >> N;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i=0; i<N; i++) arranje(N, i, i, 0, 0);

    cout << totalWeigh << endl;

    return 0;
}
