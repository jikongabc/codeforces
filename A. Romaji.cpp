#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main(){
	char ch[105];
	cin>>ch;
	int i,temp=1;
	if(ch[strlen(ch)-1] !='a' && ch[strlen(ch)-1] !='o'&& ch[strlen(ch)-1]!='u'&&ch[strlen(ch)-1]!='i'&&ch[strlen(ch)-1]!='e' && ch[strlen(ch)-1]!='n'){
			temp=0;
			
				
			}
	for(i=0;i<strlen(ch)-1;i++){
		if(ch[i] !='a' && ch[i] !='o'&& ch[i]!='u'&&ch[i]!='i'&& ch[i]!='e' && ch[i]!='n'&&ch[i+1] !='a' && ch[i+1] !='o'&& ch[i+1]!='u'&&ch[i+1]!='i' && ch[i+1]!='e'){
			temp=0;
			break;
		}
	}
	if(temp) cout<<"YES";
	else cout<<"NO";
	return 0;
}
