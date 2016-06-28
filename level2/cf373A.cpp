//http://codeforces.com/contest/373/problem/A
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int k;
	scanf("%d",&k);
	int P[10];
	for(int i=0;i<10;i++){
		P[i]=0;
	}
	char c;
	int m,flag=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%c",&c);
			if(c=='\n') scanf("%c",&c);
			if(c>47 && c<58){
				m=c-48;
				P[m]++;
			}
		}
	}
	for(int i=0;i<10;i++){
		if(P[i]>2*k){
			flag=1; break;
		}
	}
	(flag==0)?printf("YES"):printf("NO");
	return 0;
}
