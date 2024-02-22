#include<iostream>
#include<set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k,i,num,temp=1;
		long long sum_a=0,sum_b=0,sum=0;
		cin>>n>>m>>k;
		multiset<int>a;
		multiset<int>b;
		for(i=0;i<n;i++){
			cin>>num;
			a.insert(num);
		}
		for(i=0;i<m;i++){
			cin>>num;
			b.insert(num);
		}
		for(i=1;i<=k;i++){
			if(a.find(i)==a.end() && b.find(i)==b.end()){
				cout<<"NO"<<endl;
				temp=0;
				break;
			} 
			else if (a.find(i)!=a.end() && b.find(i)==b.end()) sum_a++;
			else if (a.find(i)==a.end() && b.find(i)!=b.end()) sum_b++;
			else sum++;
		}
		if(temp){
			if(sum_a<=k/2 && sum_b<=k/2 && sum_a+sum_b+sum>=k) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
