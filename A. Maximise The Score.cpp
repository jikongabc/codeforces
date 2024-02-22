#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,ans=0;
		cin>>n;
		long long a[105];
		for(i=0;i<2*n;i++) cin>>a[i];
		sort(a,a+2*n);
		for(i=0;i<2*n;i+=2) ans+=a[i];
		cout<<ans<<endl;
	}
	return 0;
}
