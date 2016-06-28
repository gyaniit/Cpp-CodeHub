#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y=0,count=0;
		cin>>n;
		int A[n];
		for(int i=0;i<n;i++){
			cin>>x;
			y=x-y;
			A[i]=y;
		}
		int b;
		for(int i=0;i<n;i++){
			cin>>b;
			if(b<=A[i])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
