//#include<iostream>
//#include<cmath>
//#include<iostream>
//using namespace std;
//int main(){
//	long long t;
//	cin>>t;
//	while(t--){
//		long long n,k,i,maxn=0;
//		long long a[300005]={0};
//		long long b[300005]={0};
//		long long c[300005]={0};
//		for(i=0;i<n;i++) cin>>a[i];
//		for(i=0;i<n;i++) cin>>b[i];
//		for(i=0;i<n;i++){
//			long long num=abs(b[i]);
//			maxn=max(maxn,num);
//			c[num]+=a[i];
//			
//		}
//		i=0;
//		long long temp=k;
//		while(c[i]<=0){
//			c[i+1]-=k;
//			c[i+1]+=c[i];
//			i++;
//		}
//		if(i>=maxn+1){
//			cout<<"YES\n";
//		}
//		else{
//			cout<<"NO\n";
//		}
//	}
//	return 0;
//}


#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> ai(n);
    vector<int> xi(n);

    for (int i = 0; i < n; i++) {
      cin >> ai[i] ;
    }
    for (int i = 0; i < n; i++) {
	      cin >> xi[i] ;
	 }

    int alive_monsters = n;
    int bullets = k;

    for (int i = 0; i < n; i++) {
      if (ai[i] <= k && xi[i] <= bullets) {
        bullets -= ai[i];
        alive_monsters--;
      } else if (ai[i] <= k) {
        bullets--;
      }

      if (bullets < 0 || bullets < ai[i + 1] - xi[i + 1]) {
        cout << "NO" << endl;
        break;
      }
      
      if (i == n - 1) {
        cout << "YES" << endl;
      }
    }
  }

  return 0;
}
