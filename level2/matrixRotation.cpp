//https://www.hackerrank.com/challenges/matrix-rotation-algo/submissions/code/22013680
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m,n,r;
    cin>>m>>n>>r;
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    int e,o;
    (m%2==0)?(e=m,o=n):(e=n,o=m);
    int v1=0,v2=m-1,v3=0,v4=n-1;

    while(e>0 && o>0){
        int size=2*o+2*(e-2);
        int s=0;
        //cout<<size;
        int at=r%size;
        int S[size];
        for(int i=v1,j=v3,s=0;s<4;){

            if((i==v2 && j==v3 && s==0)||(i==v2 && j==v4 && s==1)||(i==v1 && j==v4 && s==2)||(i==v1 && j==v3 && s==3)){
                s++;
                continue;
            }
            if(at==size) at=0;
            S[at]=A[i][j];
            at++;
            //conditions

            if(j==v3 && s==0) i++;
            else if(i==v2 && s==1) j++;
            else if(j==v4 && s==2) i--;
            else if(i==v1 && s==3) j--;
        }
        //reload
        for(int i=v1,j=v3,s=0,at=0;s<4;){

            if((i==v2 && j==v3 && s==0)||(i==v2 && j==v4 && s==1)||(i==v1 && j==v4 && s==2)||(i==v1 && j==v3 && s==3)){
                s++;
                continue;
            }
            A[i][j]=S[at];
            at++;
            //conditions

            if(j==v3 && s==0) i++;
            else if(i==v2 && s==1) j++;
            else if(j==v4 && s==2) i--;
            else if(i==v1 && s==3) j--;
        }

        //further inside
        e=e-2; o=o-2;
        v1++;v2--;v3++;v4--;
    }
    //printing results
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
