#include <cstdio>

int m, n, ans;
int a[250][250];
bool check[250][250];
const int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
const int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void dfs(int x, int y) {
    check[x][y] = true;
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
        if (!check[nx][ny] && a[nx][ny]) dfs(nx, ny);
    }
}

int main() {
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!check[i][j] && a[i][j]) {
                dfs(i, j);
                ans += 1;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}