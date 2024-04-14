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
const int N = 1e5 + 10;
using namespace std;
int n, l, r, ql, qr;
int w[N];
int a[N], b[N];
int ans = 0x3f3f3f3f;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> l >> r >> ql >> qr;
    for (int i = 1; i <= n;i++){
        cin >> w[i];
        a[i] = a[i - 1] + w[i];
    }
    for (int i = n; i >= 1;i--){
        b[i] = b[i + 1] + w[i];
    }
    for (int i = 0; i <= n;i++){
        int L = i, R = n - i;
        int sum = a[i] * l + b[i+1] * r;
        if(R-L>=2 || L-R>=2){
            sum += (R > L ? qr : ql) * abs(R - L - 1);
        }
        ans = min(ans, sum);
    }
        cout << ans;
    return 0;
}
