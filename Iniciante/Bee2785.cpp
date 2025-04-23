#include <iostream>
#include <climits>
#include <cstring>

using namespace std;

int matrix[100][100];
int dp[100][100][100]; // dp[line][begin][end]
int N;

int arranje(int begin, int end, int line, int weigh) {
    if (begin < 0 || end >= N || line >= N)
        return INT_MAX;

    // Memoization
    if (dp[line][begin][end] != -1)
        return dp[line][begin][end];

    int currentWeigh = 0;
    for (int i = begin; i <= end; i++) {
        currentWeigh += matrix[line][i];
    }

    if (line == N - 1) {
        dp[line][begin][end] = weigh + currentWeigh;
        return dp[line][begin][end];
    }

    int left = arranje(begin - 1, end, line + 1, weigh + currentWeigh);
    int right = arranje(begin, end + 1, line + 1, weigh + currentWeigh);

    dp[line][begin][end] = min(left, right);
    return dp[line][begin][end];
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
            cin >> matrix[i][j];

    memset(dp, -1, sizeof(dp));

    int totalWeigh = INT_MAX;

    for (int i = 0; i < N; i++) {
        totalWeigh = min(totalWeigh, arranje(i, i, 0, 0));
    }

    cout << totalWeigh << endl;
    return 0;
}
