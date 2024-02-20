#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[10]={0};
		int num1,num2,num3;
		cin>>num1>>num2>>num3;
		a[num1]++;
		a[num2]++;
		a[num3]++;
		for(int i=0;i<10;i++){
			if(a[i]==1){
				cout<<i<<endl;
				break;
			}
		}
		
	}
	return 0;
}
