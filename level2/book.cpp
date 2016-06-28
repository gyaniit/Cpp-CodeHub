//https://www.hackerrank.com/challenges/bear-and-workbook
//Lisa's Workbook
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ch,qpp;
    cin>>ch>>qpp;
    int q,p=1,qn,spl=0,q0=0;
    while(ch--){
        cin>>qn;
        q=0;
        for(int i=0; i<(qn/qpp)+1; i++){
            if(q==(qn-qn%qpp))
                q=q+qn%qpp;
            else
                q=q+qpp;

            p=p+1;
            if(p>q0 && p<=q){
                spl++;
            }

            if(q==qn) break;
            q=q0;
        }
    }
    cout<<spl;
    return 0;
}
