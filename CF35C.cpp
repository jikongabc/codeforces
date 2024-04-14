#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<unordered_map>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
typedef pair<int, int> PII;
const int N = 2005;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n, m, k;
int xx, yy;
int dist[N][N];
queue<PII> q;
void bfs(){
    while(!q.empty()){
        auto t = q.front();
        q.pop();
        for (int i = 0; i < 4;i++){
            int a = t.first+dx[i], b = t.second+dy[i];
            if(a<=0 || b<=0 || a>n || b>m)
                continue;
            if(dist[a][b]>=0)
                continue;
            dist[a][b] = dist[t.first][t.second] + 1;
            q.push({a, b});
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m >> k;
    memset(dist, -1, sizeof dist);
    for (int i = 1; i <= k;i++){
        cin >> xx >> yy;
        q.push({xx, yy});
        dist[xx][yy] = 0;
    }
    bfs();
    int temp = 0;
    int ans_x, ans_y;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= m;j++){
            // cout << dist[i][j];
            if(dist[i][j]>=temp){
                ans_x = i, ans_y = j;
                temp = dist[i][j];
            }
        }
        // cout << endl;
    }
    cout << ans_x << ' ' << ans_y;
    return 0;
}