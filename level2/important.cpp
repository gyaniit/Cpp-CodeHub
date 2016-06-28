#include <iostream>
#include <cstdio>
 void scanint(int &x){
 	register int c =getchar_unlocked();
 	x=0;
 	for(;(c<48 || c>57);c=getchar_unlocked());
 	for(;(c>47 && c<58);c=getchar_unlocked()){
 		x=(x<<1)+(x<<3)+c-48;
 	}
 }

int main() {
	int t;
	scanint(t);
	while(t--){
	    int n,k;//,count=0;
	    long long int e2=0,g2=0;
	    scanint(n);
	    for(int i=0; i<n;i++){
	        scanint(k);
	        if(k==2) e2++;
	        else if(k>2) g2++;
	    }
    	printf("%lld\n",(e2*g2+g2*(g2-1)/2));
	}
	return 0;
}
