//https://www.hackerrank.com/challenges/the-grid-search
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        int flag=-1;
        bool match=false;
        for(int i=0;i<R-r+1;i++){
            for(int j=0;j<C-c+1;j++){
                flag=0;
                if(G[i][j]=P[0][0]){
                    for(int k=0;k<r;k++){
                        for(int m=0;m<c;m++){
                            if(G[i+k][j+m]!=P[k][m]) {flag=1; break; }
                        }
                    if(flag==1) break;
                        flag=0;
                    }
                    if(flag==0){
                        match=true;
                        break;
                    }
                }
            }
            if(match) break;
        }
        if(match) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

/*
Sample input
2
10 10
7283455864
6731158619
8988242643
3830589324
2229505813
5633845374
6473530293
7053106601
0834282956
4607924137
3 4
9505
3845
3530
15 15
400453592126560
114213133098692
474386082879648
522356951189169
887109450487496
252802633388782
502771484966748
075975207693780
511799789562806
404007454272504
549043809916080
962410809534811
445893523733475
768705303214174
650629270887160
2 2
99
99

Sample Output

YES
NO
*/
