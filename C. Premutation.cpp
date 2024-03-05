#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int a[105][105];
		for(i=0;i<n;i++){
			for(j=0;j<n-1;j++){
				cin>>a[i][j];
			}
		}
		int num=a[0][0];
		if(num!=a[1][0]) num=a[2][0];
		cout<<num<<' ';
		for(i=0;i<n;i++){
			for(j=0;j<n-1;j++){
				if(a[i][0] !=num ) cout<<(a[i][j])<<' ';
			}
		}
		cout<<endl;
	}
	return 0;
}
