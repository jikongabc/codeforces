//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N=200010;
//int n;
//typedef pair<int,int> PII;
//queue<PII> q;
//char ch[2][N];
//bool st[N][N];
//int dx[]={-1,0,1,0};
//int dy[]={0,1,0,-1};
//void bfs(int x,int y){
//	q.push({x,y});
//	st[x][y]=1;
//	while(!q.empty()){
//		PII t=q.front();
//		q.pop();
//		for(int i=0;i<4;i++){
//			int a=t.first+dx[i],b=t.second+dy[i];
//			if(a>=0 && b>=0 && a<2 && b<n ){
//				if(ch[a][b]=='>') b++;
//				else b--;
//				if(!st[a][b]){
//					q.push({a,b});
//					st[a][b]=1;
//				}
//			}
//		}
//		
//	}
//	if(st[1][n-1]) cout<<"yes"<<endl;
//	else cout<<"no"<<endl;
//		
//}
//int main(){
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int t;
//	cin>>t;
//	while(t--){
//		memset(st,0,sizeof st);
//		cin>>n;
//		for(int i=0;i<2;i++) cin>>ch[i];
//	
//	}
//	return 0;
//}


#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
const int N=2e5+10;
string g[2];
int st[2][N];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int n;
queue<PII> q;
void bfs()
{
	q.push({0,0});
	st[0][0]=1;
	while(!q.empty()){
		PII t=q.front();
		q.pop();	
		for(int i=0;i<4;i++)
		{	
			int a=t.first+dx[i],b=t.second+dy[i];
			if(a>=0 && b>=0 && b<n && a<2)
			{
				if(g[a][b]=='<') b--;
				else b++;
				if(!st[a][b])
				{
				st[a][b]=1;
				q.push({a,b});
				}
			}
			
		}
	}
	if(st[1][n-1])cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return ;	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>g[0]>>g[1];
		memset(st,0,sizeof st);
		bfs();
	}
	return 0;
}
