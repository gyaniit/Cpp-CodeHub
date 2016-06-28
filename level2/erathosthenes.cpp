//primes upto n
//loop 1
//select a non-zero index from array
//inner loop
//set all the indexes formed by multiple of num to zero

#include <iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter top limit for the primes : ";
	cin>>n;
	int A[n];
	A[0]=0;A[1]=0;
	for(int i=2;i<=n;i++)
		A[i]=1;

	for(int i=2;i<=n;i++){
		if(A[i]==0)
			continue;
		for(int j=2; j<=n/i;j++){
			A[i*j]=0;
		}
	}

	for(int i=2;i<=n;i++)
		if(A[i]!=0)
			cout<<i<<" ";
}
