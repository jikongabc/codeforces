#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r,l;
		char a[15];
		cin>>n;
		cin>>a;
		for(int i=0;i<n;i++){
			if(a[i]=='B'){
				l=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]=='B'){
				r=i;
				break;
			}
		}
		cout<<r-l+1<<endl;
		
	}
	return 0;
}
