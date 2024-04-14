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
int n, a, b;
int p[N];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> a >> b;
    for (int i = 1; i <= n;i++){
        cin >> p[i];
    }
    sort(p + 1, p + 1 + n);
    cout << p[b+1] - p[b];
    return 0;
}