#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
typedef pair<int, int> PII;
const int N = 2005;
int n, k, m;
int a, b;
int fa[N];
int cnt[N];
int find(int x){
    if(fa[x]!=x){
        fa[x] = find(fa[x]);
    }
    return fa[x];
}
int ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n;i++){
        fa[i] = i;
    }
    for (int i = 1; i <= k; i++){
        cin >> a >> b;
        int x = find(a), y = find(b);
        if(x!=y)
            fa[y] = x;
    }
    // for (int i = 1; i <= n;i++){
    //     cout << i << ':' << fa[i] << endl;
    // }
    for (int i = 1; i <= n; i++){
        cnt[find(i)]++;
    }
    cin >> m;
    for (int i = 1; i <= m;i++){
        cin >> a >> b;
        if(fa[a]==fa[b])
            cnt[fa[a]] = 0;
    }
    for (int i = 1; i <= n;i++){
        ans = max(ans, cnt[i]);
    }
    cout << ans;
    return 0;
}