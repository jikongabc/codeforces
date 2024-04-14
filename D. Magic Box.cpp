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
int aa, b, c;
int x, y ,z;
int a[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> y >> z;
    cin >> aa >> b >> c;
    for (int i = 1; i <= 6;i++){
        cin >> a[i];
    }
    int ans = 0;
    if (y < 0)
        ans += a[1];
    if (y > b)
        ans += a[2];
    if (z < 0)
        ans += a[3];
    if (z > c)
        ans += a[4];
    if (x < 0)
        ans += a[5];
    if (x > aa)
        ans += a[6];
    cout << ans;
    return 0;
}