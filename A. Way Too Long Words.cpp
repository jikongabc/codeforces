#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char a[1005];
		cin>>a;
		if(strlen(a)>10) cout<<a[0]<<strlen(a)-2<<a[strlen(a)-1]<<endl;
		else cout<<a<<endl;		
	}
	return 0;
}
