#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swaap(int* a, int* b){
        int t= *a;
        *a=*b;
        *b=t;
}

int partn(int A[],int l, int h){
        int i,j,pivot,p;
        i=l+1;
        j=0;
        pivot=A[l];
        for(j=l+1 ; j<h ; j++){
                if(A[j]<pivot){
                       swaap(&A[j],&A[i]);
                        i++;
                }
                swaap(&A[l],&A[i-1]);
        }
        p=i-1;
        return p;
}

void quickSort(int A[], int l, int h){
        int p = partn(A,l,h);
        quickSort(A,l,p-1);
        quickSort(A,p+1,h);
}

int main(){
        int n,l,h;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
                cin>>A[i];
        }
        l=0,h=n-1;
        quickSort(A,l,h);
        for(int i=0;i<n;i++){
                cout<<A[i];
        }
}
