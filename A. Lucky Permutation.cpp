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
const int N = 1e5+10;
int ans[N];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if(n%4==2 || n%4==3){
        cout << -1;
        return 0;
    }
    if(n==1){
        cout << 1;
        return 0;
    }
    for (int i = 1; i <= n >> 1; i += 2)
    {
        ans[i] = i + 1;
        ans[i + 1] = n - i + 1;
        ans[n - i + 1] = n - i;
        ans[n - i] = i;
    }
    for (int i = 1; i <= n;i++){
        if(ans[i]!=0)
            cout << ans[i] << ' ';
        else
            cout << i << ' ';
    }

        return 0;
}