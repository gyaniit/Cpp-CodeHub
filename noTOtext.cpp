#include<iostream>
using namespace std;

int main(){
    int n,cnt=0,a;
    char B[] [10] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    a=n;
    while(a>0){
        a=n/10;
        cnt++;
    }
    int A[cnt];
    a=cnt-1;
    while(a>=0){
        A[a]=n%10;
        a--;
        n=n/10;
    }
    while(a<cnt){
            cout<<a;
        cout<<B[A[a]]<<"done";
        a++;
    }
}

