#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
char a[1050][1050];
bool vis[1050][1050];

void dfs(int x, int y) {
    if(x < 1 || x > n || y < 1 || y > m) return;
    if(vis[x][y] || a[x][y] == 'o') return;
    vis[x][y] = true;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            //if(a[i][j] == '.') a[i][j] = 'o';
            //else a[i][j] = '.';
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(!vis[i][j] && a[i][j] == '.') {
                ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans;
    return 0;
}
