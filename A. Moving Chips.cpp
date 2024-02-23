#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,ans=0,num1=0,num2=n-1;
		cin>>n;
		int a[55];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0) ans++;
		}
		for(i=0;i<n;i++){
			if(a[i]==1) break;
		}
		num1=i;
		for(i=n-1;i>=0;i--){
			if(a[i]==1) break;
		}
		num2=i;
		ans=ans-num1-n+1+num2;
		cout<<ans<<endl;
	}
	return 0;
}
