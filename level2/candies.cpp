//https://www.hackerrank.com/challenges/candies
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;

void find_increment(int rat[], int inc[], bool visit[], int pos){
    int start,end;
    start=(pos-1)>0?(pos-1):0;
    end=(pos+1)<n?(pos+1):n;

    for(int i=start;i<=end;i++){
        if(rat[i]<rat[pos]){
			if(!visit[i])
				find_increment(rat, inc, visit, i);
			if(inc[pos]<=inc[i])
				inc[pos]=inc[i]+1;
        }
    }
    visit[pos]=true;
}

int main() {
    cin>>n;
    int sum=0,mini=0;
    int rat[n],inc[n];
    bool visit[n];
    for(int i=0;i<n;i++){
        scanf("%d",&rat[i]);
        inc[i]=1;
        visit[i]=false;
    }
    for(int i=0;i<n;i++){
        find_increment(rat,inc,visit,i);
    }
    for(int i=0;i<n;i++){
        sum+=inc[i];
    }
    printf("%d",sum);

    return 0;
}
