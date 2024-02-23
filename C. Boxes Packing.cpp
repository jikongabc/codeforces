#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,i;
	long long num,ans=0;
	cin>>n;
	map<long long,long long>a;
	for(i=0;i<n;i++){
		cin>>num;
		a[num]++;
	    ans=max(ans,a[num]);
	}
	cout<<ans<<endl;
	return 0;
}
