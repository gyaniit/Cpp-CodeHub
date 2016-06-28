#include<iostream>
using namespace std;

int main(){
    int n,cnt=0;
    string B = {"one","two","three","four","five","six","seven","eight","nine","ten"};
    cin>>n;
    while(a>0){
        a=n/10;
        cnt++
    }
    int A[cnt];
    a=cnt-1;
    while(a>=0){
        A[a]=n%10;
        a--;
        n=n/10;
    }
    while(a<cnt){
        cout<<B[A[a]<<" ";
        a++;
    }

