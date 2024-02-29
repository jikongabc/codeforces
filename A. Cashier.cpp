#include<iostream>
using namespace std;
#define int long long
signed main(){
	int n,L,a,i,num1=0,num2=0,temp=0,ans=0;
	cin>>n>>L>>a;
	while(n--){
		cin>>num1>>num2;
		ans+=(num1-temp)/a;
		temp=num1+num2;
	}
	ans+=(L-num1-num2)/a;
	cout<<ans<<endl;
	return 0;
}
